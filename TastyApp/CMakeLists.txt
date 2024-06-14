cmake_minimum_required(VERSION 3.10)
project(TastyApp)

# Define a variável com o diretório base
set(BASE_DIR ${CMAKE_SOURCE_DIR}/TastyApp)

# Adiciona diretórios de inclusão
include_directories(
        ${BASE_DIR}/headers/controllers
        ${BASE_DIR}/headers/exceptions
        ${BASE_DIR}/headers/model
        ${BASE_DIR}/headers/views
)

# Adiciona os arquivos fonte
set(SOURCES
        ${BASE_DIR}/sources/controllers/Controller.cpp
        ${BASE_DIR}/sources/exceptions/invalidDataException.cpp
        ${BASE_DIR}/sources/models/App.cpp
        ${BASE_DIR}/sources/models/Group.cpp
        ${BASE_DIR}/sources/models/GroupContainer.cpp
        ${BASE_DIR}/sources/models/Person.cpp
        ${BASE_DIR}/sources/models/Profile.cpp
        ${BASE_DIR}/sources/models/ProfileContainer.cpp
        ${BASE_DIR}/sources/models/Rating.cpp
        ${BASE_DIR}/sources/models/RatingContainer.cpp
        ${BASE_DIR}/sources/models/Recipe.cpp
        ${BASE_DIR}/sources/models/RecipeContainer.cpp
        ${BASE_DIR}/sources/models/RecipePage.cpp
        ${BASE_DIR}/sources/models/Registration.cpp
        ${BASE_DIR}/sources/models/User.cpp
        ${BASE_DIR}/sources/models/UserContainer.cpp
        ${BASE_DIR}/sources/views/GroupView.cpp
        ${BASE_DIR}/sources/views/ProfileView.cpp
        ${BASE_DIR}/sources/views/RatingView.cpp
        ${BASE_DIR}/sources/views/RecipesView.cpp
        ${BASE_DIR}/sources/views/UserView.cpp
        ${BASE_DIR}/sources/views/Utils.cpp
        ${BASE_DIR}/sources/views/View.cpp
        ${BASE_DIR}/main.cpp
)

# Adiciona o executável principal
add_executable(TastyApp ${SOURCES})

# Configuração do Google Test
# Baixa o Google Test se necessário
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# Desativa a instalação de testes por padrão
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK ON)
set(BUILD_GTEST ON)
FetchContent_MakeAvailable(googletest)

# Adiciona o diretório de testes
add_subdirectory(${BASE_DIR}/tests)

# Adiciona testes
enable_testing()

# Adiciona o executável de testes
add_executable(runTests
        ${BASE_DIR}/tests/test_main.cpp
)

# Linka o executável de testes com o Google Test
target_link_libraries(runTests gtest gtest_main)
