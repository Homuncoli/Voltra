# Voltra

A project to test various DevOps tools

## CMake

This project should be build via cmake:

```bash
cmake -B build/
make -C build/
./build/src/Voltra
```

A Environment.h header is created at build/config/Environment.h containing the info from CMake in config/Environment.h.in

## Googletest

Testing is done via google test

```bash
cmake -B build/
make -C build/
./build/test/Voltra_test
```

## spdlog

Logging is done via spdlog

## Jenkins

As a build server a Jenkins config + Dockercompose is included
