cmake_minimum_required(VERSION 3.1)

project(inf-tape)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_AUTOMOC ON)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(main main.cpp inf_tape.cpp tape_deque.cpp)


if(BUILD_TESTS)
    include_directories(${GTEST_INCLUDE_DIRS})

    set(__CFLAGS "${CMAKE_C_FLAGS}")
    set(__CXXFLAGS "${CMAKE_CXX_FLAGS}")
    set(CMAKE_C_FLAGS "")
    set(CMAKE_CXX_FLAGS "")
    add_subdirectory(googletest EXCLUDE_FROM_ALL)
    set(CMAKE_C_FLAGS "${__CFLAGS}")
    set(CMAKE_CXX_FLAGS "${__CXXFLAGS}")
    unset(__CFLAGS)
    unset(__CXXFLAGS)
    
    enable_testing()

    add_executable(test_tape test_tape.cpp inf_tape.cpp tape_deque.cpp)
    target_link_libraries(test_tape gtest gtest_main)

    add_test(TestTape test_tape)
endif()