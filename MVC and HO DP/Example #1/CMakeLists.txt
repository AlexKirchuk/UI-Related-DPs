cmake_minimum_required(VERSION 3.8)

project(Example1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/model.cpp
    src/view.cpp
    src/controller.cpp
)

add_executable(Example1 ${SOURCES})

enable_testing()
add_subdirectory(tests)

add_library(core
    src/model.cpp
    src/view.cpp
    src/controller.cpp
)

if(POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()