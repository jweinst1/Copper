# utils testing cmake file #

include_directories(${PROJECT_SOURCE_DIR}/utils)

add_executable(ChopChopTests ChopChopTests.cpp)
target_link_libraries(ChopChopTests copper_utils)
add_test(ChopChopTests ChopChopTests)
