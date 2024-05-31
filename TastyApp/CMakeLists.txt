cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(TastyApp main.cpp
        headers/controllers/RecipesController.h
        headers/controllers/controller.h
        headers/model/GroupContainer.h
        headers/model/ProfileContainer.h
        headers/model/RatingContainer.h
        headers/model/RecipeContainer.h
        headers/model/RecipePage.h
        headers/model/Registration.h
        headers/model/UserContainer.h
        headers/model/Utils.h
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/UserView.h
        headers/views/UtilsView.h
        sources/controllers/controller.cpp
        sources/model/GroupContainer.cpp
        sources/model/ProfileContainer.cpp
        sources/model/RatingContainer.cpp
        sources/model/RecipeContainer.cpp
        sources/model/RecipePage.cpp
        sources/model/UserContainer.cpp
        sources/model/Utils.cpp

        User.cpp
        User.h
        Group.cpp
        Group.h
        Recipes.cpp
        Recipes.h
        Profile.cpp
        Profile.h
        Rating.cpp
        Rating.h
        User.cpp
        User.cpp
)

