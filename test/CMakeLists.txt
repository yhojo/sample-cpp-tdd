cmake_minimum_required(VERSION 3.1)

file(GLOB MAIN_CODES ../src/*.cpp)
include_directories(../src)

file(GLOB TEST_SOURCE_FILES *.cpp)

add_executable(run_test ${TEST_SOURCE_FILES} ${MAIN_CODES})

target_link_libraries(run_test gmock gmock_main gtest pthread)

add_test(
  NAME run_test
  COMMAND $<TARGET_FILE:run_test>
)
