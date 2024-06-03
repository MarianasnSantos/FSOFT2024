cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(TastyApp
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/Utils.h
        sources/views/Utils.cpp
        sources/controllers/controller.cpp
        headers/controllers/Controller.cpp
        headers/controllers/Controller.h
        sources/model/Group.cpp
        headers/model/Group.h
        sources/model/GroupContainer.cpp
        headers/model/GroupContainer.h
        sources/model/Registration.cpp
        headers/model/Registration.h
        sources/model/User.cpp
        headers/model/User.h
        sources/model/UserContainer.cpp
        headers/model/UserContainer.h
        sources/model/Profile.cpp
        headers/model/Profile.h
        sources/model/ProfileContainer.cpp
        headers/model/ProfileContainer.h
        sources/model/Recipe.cpp
        headers/model/Recipe.h
        sources/model/RecipeContainer.cpp
        headers/model/RecipeContainer.h
        sources/model/Rating.cpp
        headers/model/Rating.h
        sources/model/RatingContainer.cpp
        headers/model/RatingContainer.h
        sources/model/RecipePage.cpp
        headers/model/RecipePage.h
        headers/views/UserView.h
        headers/exceptions/invalidDataException.cpp
        headers/exceptions/invalidDataException.h

)

