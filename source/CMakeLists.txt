cmake_minimum_required(VERSION 3.28.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_EXTENSIONS OFF)

project(FooBar VERSION 0.1.0 LANGUAGES C CXX)

add_executable(FooBar main.cpp)

target_compile_options(FooBar PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)