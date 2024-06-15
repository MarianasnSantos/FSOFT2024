include_directories(TastyApp/headers/controllers)
include_directories(TastyApp/headers)
include_directories(TastyApp/sources)
project(TastyApp)

include_directories("${PROJECT_SOURCE_DIR}/TastyApp/headers/model")
include_directories("${PROJECT_SOURCE_DIR}/TastyApp/headers/views")
include_directories("${PROJECT_SOURCE_DIR}/TastyApp/headers/controllers")
include_directories("${PROJECT_SOURCE_DIR}/TastyApp/sources/model")
include_directories("${PROJECT_SOURCE_DIR}/TastyApp/sources/views")
include_directories("${PROJECT_SOURCE_DIR}/TastyApp/sources/controllers")
set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/sources)

# Adicionar o executável principal
add_executable(TastyApp
        sources/controllers/Controller.cpp)