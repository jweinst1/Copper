# Tests for Runner #

include_directories(${PROJECT_SOURCE_DIR}/runner
                    ${PROJECT_SOURCE_DIR}/utils)

# OS Path Tests #
add_executable(test_ospath test_ospath.c ${PROJECT_SOURCE_DIR}/runner/ospath.c)
add_test(test_ospath test_ospath)
