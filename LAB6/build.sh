#!/bin/bash

# Proje dizinine geçiş
mkdir -p build
cd build

# CMake yapılandırması (Unix Makefiles jeneratörü ile)
cmake -G "Unix Makefiles" ..

# Derleme
make
