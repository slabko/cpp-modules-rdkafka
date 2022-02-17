
Building RdKafka's 
```
git submodule update --init --recursive
mkdir thirdparty/bin
cd thirdparty/src/librdkafka
./configure --prefix=$(pwd)/../../bin
make
make install
```

Building and running the application
```
mkdir build
cd build
cmake ..
make
./main
```
