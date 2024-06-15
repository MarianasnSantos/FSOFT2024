cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR
        ${PROJECT_SOURCE_DIR}/sources)

set(PROJECT_MOCK_DIR ${PROJECT_SOURCE_DIR}/mock)
include_directories(
        ${PROJECT_MOCK_DIR})
set(MOCK_SOURCE_FILES
        ${PROJECT_MOCK_DIR}/MockData.h
        ${PROJECT_MOCK_DIR}/MockData.cpp)

set(PROJECT_HEADERS_CONTROLLERS_DIR
        ${PROJECT_HEADERS_DIR}/controllers)
set(PROJECT_SOURCES_CONTROLLERS_DIR
        ${PROJECT_SOURCES_DIR}/controllers)
include_directories(
        ${PROJECT_HEADERS_CONTROLLERS_DIR}
        ${PROJECT_SOURCES_CONTROLLERS_DIR})
set(CONTROLLERS_SOURCE_FILES
        ${PROJECT_HEADERS_CONTROLLERS_DIR}/Controller.h
        ${PROJECT_SOURCES_CONTROLLERS_DIR}/Controller.cpp)

set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/exceptions)
set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)
include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/DataConsistencyException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/DataConsistencyException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/DuplicatedDataException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/DuplicatedDataException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InvalidDataException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InvalidDataException.cpp)

set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/model)
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model)
include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR})
set(MODEL_SOURCE_FILES
        ${PROJECT_HEADERS_MODEL_DIR}/App.h
        ${PROJECT_SOURCES_MODEL_DIR}/App.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Group.h
        ${PROJECT_SOURCES_MODEL_DIR}/Group.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/GroupContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/GroupContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Person.h
        ${PROJECT_SOURCES_MODEL_DIR}/Person.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Profile.h
        ${PROJECT_SOURCES_MODEL_DIR}/Profile.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ProfileContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ProfileContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Rating.h
        ${PROJECT_SOURCES_MODEL_DIR}/Rating.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/RatingContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/RatingContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Recipe.h
        ${PROJECT_SOURCES_MODEL_DIR}/Recipe.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/RecipeContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/RecipeContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/RecipePage.h
        ${PROJECT_SOURCES_MODEL_DIR}/RecipePage.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Registration.h
        ${PROJECT_SOURCES_MODEL_DIR}/Registration.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/User.h
        ${PROJECT_SOURCES_MODEL_DIR}/User.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/UserContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/UserContainer.cpp)



set(PROJECT_HEADERS_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/views)
set(PROJECT_SOURCES_VIEWS_DIR
        ${PROJECT_SOURCES_DIR}/views)
include_directories(
        ${PROJECT_HEADERS_VIEWS_DIR}
        ${PROJECT_SOURCES_VIEWS_DIR})
set(VIEWS_SOURCE_FILES
        ${PROJECT_HEADERS_VIEWS_DIR}/GroupView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/GroupView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ProfileView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ProfileView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/RatingView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/RatingView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/RecipesView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/RecipesView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/UserView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/UserView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
        ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/View.h
        ${PROJECT_SOURCES_VIEWS_DIR}/View.cpp)





add_executable(
        TastyApp
        main.cpp
        ${VIEWS_SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${EXCEPTIONS_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})