# utils testing cmake file #

include_directories(${PROJECT_SOURCE_DIR}/utils)

add_executable(CStrTests CStrTests.cpp)
target_link_libraries(CStrTests copper_utils)
add_test(CStrTests CStrTests)
