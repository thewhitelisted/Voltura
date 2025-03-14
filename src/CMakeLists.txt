# Add library
add_library(voltura_lib
    core.cpp
)

# Include directories
target_include_directories(voltura_lib
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# Add executable
add_executable(voltura_exe main.cpp)
target_link_libraries(voltura_exe PRIVATE voltura_lib) 