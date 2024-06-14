cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

# Adicionar diretórios de cabeçalhos
include_directories(headers)
include_directories(headers/controllers)
include_directories(headers/exceptions)
include_directories(headers/model)
include_directories(headers/views)

# Adicionar subdiretório do Google Test
add_subdirectory(googletest-main)

# Adicionar todos os arquivos fonte
file(GLOB_RECURSE SOURCES "sources/*.cpp")

# Adicionar o executável principal
add_executable(TastyApp ${SOURCES} main.cpp)

# Adicionar executável de teste
add_executable(runTests tests/test_main.cpp)

# Linkar bibliotecas do Google Test aos testes
target_link_libraries(runTests gtest gtest_main)

# Adicionar os testes ao CMake
enable_testing()
add_test(NAME runTests COMMAND runTests)
