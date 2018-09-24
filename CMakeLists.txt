cmake_minimum_required(VERSION 3.12)

project(score_tabler CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(src)
