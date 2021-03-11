#include <iostream>

#include <spdlog/spdlog.h>

#include "Forumla.h"

int main() {
    std::cout << Formula::square(10) << '\n';

    spdlog::info("Sample Info output.");
    spdlog::warn("Sample Warn output.");
    spdlog::error("Sample Error output.");

    return 0;
}