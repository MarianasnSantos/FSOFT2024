cmake_minimum_required(VERSION 3.27)
project(TastyApp CXX)

set(CMAKE_CXX_STANDARD 17)

# Adicionar diretórios de inclusão
include_directories(headers)

# Adicionar todos os arquivos fonte e cabeçalhos manualmente
set(SOURCES
        main.cpp
        sources/controllers/Controller.cpp
        sources/model/App.cpp
        sources/model/Group.cpp
        sources/model/GroupContainer.cpp
        sources/model/Person.cpp
        sources/model/Profile.cpp
        sources/model/ProfileContainer.cpp
        sources/model/Rating.cpp
        sources/model/RatingContainer.cpp
        sources/model/Recipe.cpp
        sources/model/RecipeContainer.cpp
        sources/model/RecipePage.cpp
        sources/model/Registration.cpp
        sources/model/User.cpp
        sources/model/UserContainer.cpp
        sources/views/GroupView.cpp
        sources/views/ProfileView.cpp
        sources/views/RatingView.cpp
        sources/views/RecipesView.cpp
        sources/views/UserView.cpp
        sources/views/Utils.cpp
        sources/views/View.cpp
        sources/exceptions/InvalidDataException.cpp
)

set(HEADERS
        headers/controllers/Controller.h
        headers/model/App.h
        headers/model/Group.h
        headers/model/GroupContainer.h
        headers/model/Person.h
        headers/model/Profile.h
        headers/model/ProfileContainer.h
        headers/model/Rating.h
        headers/model/RatingContainer.h
        headers/model/Recipe.h
        headers/model/RecipeContainer.h
        headers/model/RecipePage.h
        headers/model/Registration.h
        headers/model/User.h
        headers/model/UserContainer.h
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/UserView.h
        headers/views/Utils.h
        headers/views/View.h
        headers/exceptions/InvalidDataException.h
)

# Adicionar o executável principal
add_executable(TastyApp ${SOURCES} ${HEADERS})

# Adicionar subdiretório do Google Test
add_subdirectory(googletest-main)

# Adicionar executável de teste
add_executable(runTests
        tests/test_main.cpp
)

# Linkar bibliotecas do Google Test aos testes
target_link_libraries(runTests gtest gtest_main)

# Adicionar os testes ao CMake
enable_testing()
add_test(NAME runTests COMMAND runTests)
