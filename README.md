# Voltra

A project to test various DevOps tools

## CMake

This project should be build via cmake:

```bash
cmake -B build/
make -C build/
./build/src/Voltra
```

## Googletest

Testing is done via google test

```bash
cmake -B build/
make -C build/
./build/test/Voltra_test
```

## spdlog

Logging is done via spdlog
