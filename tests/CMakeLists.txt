# Find Google Test package
find_package(GTest REQUIRED)

# Add test executable
add_executable(voltura_tests
    # Add your test source files here
)

target_link_libraries(voltura_tests
    PRIVATE
        voltura_lib
        GTest::GTest
        GTest::Main
)

# Register tests
add_test(NAME voltura_tests COMMAND voltura_tests) 