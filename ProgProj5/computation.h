#pragma once
#include <string>
#include <chrono>
#include <thread>
#include <syncstream>
#include <iostream>

void compute(const std::string& name, int duration_seconds);

void slow(const std::string& name);

void quick(const std::string& name);