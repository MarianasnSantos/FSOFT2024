cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

include_directories(headers)

add_executable(TastyApp
        main.cpp
        headers/controllers/Controller.h
        sources/controllers/Controller.cpp
        headers/model/App.h
        sources/model/App.cpp
        headers/model/Group.h
        sources/model/Group.cpp
        headers/model/GroupContainer.h
        sources/model/GroupContainer.cpp
        headers/model/Registration.h
        sources/model/Registration.cpp
        headers/model/User.h
        sources/model/User.cpp
        headers/model/UserContainer.h
        sources/model/UserContainer.cpp
        headers/model/Profile.h
        sources/model/Profile.cpp
        headers/model/ProfileContainer.h
        sources/model/ProfileContainer.cpp
        headers/model/Recipe.h
        sources/model/Recipe.cpp
        headers/model/RecipeContainer.h
        sources/model/RecipeContainer.cpp
        headers/model/Rating.h
        sources/model/Rating.cpp
        headers/model/RatingContainer.h
        sources/model/RatingContainer.cpp
        headers/model/RecipePage.h
        sources/model/RecipePage.cpp
        headers/views/View.h
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/UserView.h
        headers/views/Utils.h
        sources/views/View.cpp
        sources/views/GroupView.cpp
        sources/views/ProfileView.cpp
        sources/views/RatingView.cpp
        sources/views/RecipesView.cpp
        sources/views/UserView.cpp
        sources/views/Utils.cpp
        headers/exceptions/InvalidDataException.h
        sources/exceptions/InvalidDataException.cpp
)