cmake_minimum_required(VERSION 3.15)

# Project name and version
project(Voltura VERSION 1.0.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Option for enabling tests
option(BUILD_TESTS "Build tests" OFF)

# Enable testing if BUILD_TESTS is ON
if(BUILD_TESTS)
    enable_testing()
endif()

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Add source directory
add_subdirectory(src)

# Add tests directory if testing is enabled
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()

# Install rules
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
        DESTINATION include
        FILES_MATCHING PATTERN "*.hpp") 