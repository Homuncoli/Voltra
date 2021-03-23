git submodule update --init --recursive
cmake -B build/ -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=ON
make -C build/