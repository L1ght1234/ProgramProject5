#include "work.h"
#include "computation.h"
#include <future>
#include <chrono>
#include <iostream>
#include <syncstream>

void work() {
    auto start_time = std::chrono::steady_clock::now();

    quick("A");

    auto future_B1 = std::async(std::launch::async, []() {
        slow("B1");
        });

    auto future_C2 = std::async(std::launch::async, []() {
        slow("C2");
        });

    quick("B2");
    quick("B3");

    future_B1.wait();
    quick("C1");

    future_C2.wait();
    quick("D");

    auto end_time = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time);

    std::osyncstream(std::cout) << "Execution time: " << duration.count()
        << " seconds" << std::endl;
    std::osyncstream(std::cout) << "Work is done!" << std::endl;
}