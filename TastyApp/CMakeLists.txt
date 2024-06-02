cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(TastyApp
        headers/controllers/RecipesController.h
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/UtilsView.h
        sources/controllers/controller.cpp
        headers/controllers/Controller.cpp
        headers/controllers/Controller.h
        headers/model/Group.cpp
        headers/model/Group.h
        headers/model/GroupContainer.cpp
        headers/model/GroupContainer.h
        headers/model/Registration.cpp
        headers/model/Registration.h
        headers/model/User.cpp
        headers/model/User.h
        headers/model/UserContainer.cpp
        headers/model/UserContainer.h
        headers/model/Profile.cpp
        headers/model/Profile.h
        headers/model/ProfileContainer.cpp
        headers/model/ProfileContainer.h
        headers/model/Recipe.cpp
        headers/model/Recipe.h
        headers/model/RecipeContainer.cpp
        headers/model/RecipeContainer.h
        headers/model/Rating.cpp
        headers/model/Rating.h
        headers/model/RatingContainer.cpp
        headers/model/RatingContainer.h
        headers/model/RecipePage.cpp
        headers/model/RecipePage.h
        headers/views/UserView.cpp
        headers/views/UserView.h
        headers/exceptions/invalidDataException.cpp
        headers/exceptions/invalidDataException.h

)

