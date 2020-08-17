cmake_minimum_required(VERSION 3.16)

project(BoostConanTest)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_executable(boost_test main.cpp)

target_link_libraries(boost_test CONAN_PKG::boost)
