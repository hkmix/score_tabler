cmake_minimum_required(VERSION 3.10)

project(score_tabler CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Add nlohmann-json library through vcpkg.
find_path(JSON_INCLUDE_DIR NAMES nlohmann/json.hpp)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${JSON_INCLUDE_DIR}
)

add_subdirectory(src)
