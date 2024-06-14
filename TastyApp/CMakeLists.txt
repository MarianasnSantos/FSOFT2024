cmake_minimum_required(VERSION 3.27)
project(TastyApp)

# Definir o padrão C++ para C++17
set(CMAKE_CXX_STANDARD 17)

# Incluir diretórios de headers
include_directories(headers)
include_directories(sources)

# Adicionar o executável principal
add_executable(TastyApp
        sources/controllers/Controller.cpp
        sources/model/App.cpp
        sources/model/Group.cpp
        sources/model/GroupContainer.cpp
        sources/model/Registration.cpp
        sources/model/User.cpp
        sources/model/UserContainer.cpp
        sources/model/Profile.cpp
        sources/model/ProfileContainer.cpp
        sources/model/Recipe.cpp
        sources/model/RecipeContainer.cpp
        sources/model/Rating.cpp
        sources/model/RatingContainer.cpp
        sources/model/RecipePage.cpp
        sources/views/View.cpp
        sources/views/GroupView.cpp
        sources/views/ProfileView.cpp
        sources/views/RatingView.cpp
        sources/views/RecipesView.cpp
        sources/views/UserView.cpp
        sources/views/Utils.cpp
        sources/exceptions/InvalidDataException.cpp
        main.cpp
)

# Adicionar diretório do Google Test
add_subdirectory(googletest-main)

# Adicionar o executável de testes
add_executable(runTests
        tests/test_main.cpp
)

# Linkar bibliotecas do Google Test aos testes
target_link_libraries(runTests gtest gtest_main)

# Adicionar os testes ao CMake
enable_testing()
add_test(NAME runTests COMMAND runTests)
