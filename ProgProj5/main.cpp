#include "work.h"
#include <iostream>
#include <syncstream>

int main() {
    std::osyncstream(std::cout) << "=== Laboratory Work: Computation Scheduling ===" << std::endl;
    std::osyncstream(std::cout) << "Variant #8" << std::endl;
    std::osyncstream(std::cout) << "Computations: A, B1, B2, B3, C1, C2, D" << std::endl;
    std::osyncstream(std::cout) << "Slow (7s): B1, C2" << std::endl;
    std::osyncstream(std::cout) << "Quick (1s): A, B2, B3, C1, D" << std::endl;
    std::osyncstream(std::cout) << "Dependencies: B1(A), C1(B1,B2,B3), D(C1,C2)" << std::endl;
    std::osyncstream(std::cout) << "============================================" << std::endl;
    std::osyncstream(std::cout) << std::endl;

    work();

    return 0;
}