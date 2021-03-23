#include <iostream>

#include <spdlog/spdlog.h>

#include "Voltra.h"

int main() {
    spdlog::info("{0}: {1}", CMAKE_PROJECT_NAME, CMAKE_PROJECT_VERSION);
    spdlog::info("{0}: {1}", PROJECT_NAME, PROJECT_VERSION);

    return 0;
}