cmake_minimum_required(VERSION 3.27)
project(TastyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(TastyApp main.cpp
        headers/controllers/UserController.h
        headers/controllers/ProfileController.h
        headers/controllers/RecipesController.h
        headers/controllers/GroupController.h
        headers/controllers/RatingController.h
        headers/controllers/UtilsController.h
        headers/model/Group.h
        headers/model/Profile.h
        headers/model/Rating.h
        headers/model/Recipes.h
        headers/model/User.h
        headers/model/Utils.h
        headers/views/GroupView.h
        headers/views/ProfileView.h
        headers/views/RatingView.h
        headers/views/RecipesView.h
        headers/views/UserView.h
        headers/views/UtilsView.h
        sources/model/Group.cpp
        sources/model/Profile.cpp
        sources/model/Rating.cpp
        sources/model/Recipes.cpp
        sources/model/User.cpp
        sources/model/Utils.cpp
        sources/views/GroupView.cpp
        sources/views/ProfileView.cpp
        sources/views/RatingView.cpp
        sources/views/RecipesView.cpp
        sources/views/UserView.cpp
        sources/views/UtilsView.cpp
        sources/controllers/GroupController.cpp
        sources/controllers/ProfileController.cpp
        sources/controllers/RatingController.cpp
        sources/controllers/RecipesController.cpp
        sources/controllers/UserController.cpp
        sources/controllers/UtilsController.cpp)
