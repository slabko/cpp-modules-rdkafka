cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(CMAKE_CXX_STANDARD 17)

# Search in our custom directory
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH};thirdparty/bin)

# Add FindRdKafka.cmake
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")
set(CPPKAFKA_CMAKE_VERBOSE TRUE)

set(RDKAFKA_MIN_VERSION "0.9.4")
set(RDKAFKA_MIN_VERSION_HEX 0x00090400)

add_compile_options(-Wall)

project(main)

add_executable(${PROJECT_NAME} main.cpp)


find_package(RdKafka REQUIRED)

target_link_libraries(main PUBLIC RdKafka::rdkafka)
