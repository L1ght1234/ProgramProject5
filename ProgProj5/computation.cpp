#include "computation.h"

void compute(const std::string& name, int duration_seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(duration_seconds));
    std::osyncstream(std::cout) << name << std::endl;
}

void slow(const std::string& name) {
    compute(name, 7);
}

void quick(const std::string& name) {
    compute(name, 1);
}