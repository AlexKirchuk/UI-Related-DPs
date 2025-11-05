cmake_minimum_required(VERSION 3.15)
project(Example_MVP_and_HO_DP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(mvp_app
    src/main.cpp
    src/model.cpp
    src/view.cpp
    src/presenter.cpp
)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(tests
    tests/test_model.cpp
    tests/test_presenter.cpp
    src/model.cpp
    src/view.cpp
    src/presenter.cpp
)

target_link_libraries(tests PRIVATE gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)
