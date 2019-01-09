# Main CMake File for copper #
cmake_minimum_required(VERSION 3.5)

# Project copper begins here #
project(copper)

# Version Tracker #
set(copper_version_major 0)
set(copper_version_minor 0)
set(copper_version_patch 1)
set(copper_version "${copper_version_major}.${copper_version_minor}.${copper_version_patch}")

# Enables Testing for project #
enable_testing()

add_subdirectory(utils)
add_subdirectory(runner)

# Writes build version to receipt file.
file(WRITE ${PROJECT_SOURCE_DIR}/bin/build_receipt.txt "copper Build\n\nVersion ${copper_version}\n")
