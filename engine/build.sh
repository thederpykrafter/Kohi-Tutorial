#!/bin/bash
# Build scriot for engine
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFileNames=$(find . -type f -name "*.c")

# echo "Files:" $cFileNames

assembly="engine"
compilerFlags="-g -shared -fdeclspec -fPIC"
# -fms-extensions
# -Wall -Werror
includeFlags="-Isrc"
linkerFlags="-lvulkan -lxcb -lX11-xcb -lX11 -lxkbcommon"
defines="-D_DEBUG -DKEXPORT"

echo "Building $assembly..."
clang $cFileNames $compilerFlags -o ../bin/lib$assembly.so $defines $includeFlags $linkerFlags