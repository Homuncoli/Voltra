# Voltra

A CMake project template for building an library or executable  with:

* Logging [SPDLOG]
* Test [gTest]

## CMake
After running pulling all submodules via 
```bash
git submodule update --init --recursive
```

This project should be build via cmake:

```bash
cmake -B build/
make -C build/
./build/src/Voltra
```

A Voltra.h header is created at build/include/Voltra.h containing the info from CMake in include/Voltra.h.in

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
