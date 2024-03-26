cmake_minimum_required(VERSION 3.27)
project(Defeat_Olaf)

set(VERSION_REQUISE 13.1.0)

if(CMAKE_CXX_COMPILER_VERSION VERSION_EQUAL ${VERSION_REQUISE}) # verification que la version du compilateur est compatible avec SFML

    file(GLOB SOURCE_FILES ./src/*.cpp)
    file(GLOB HEADER_FILES ./src/*.h)

    add_executable(Defeat_Olaf ${SOURCE_FILES} ${HEADER_FILES})

    # La bibliotheque SFML sera statique c'est a dire qu'elle est incluse dans les fichiers du projet.
    # C'est pour éviter d'installer SFML sur chaque ordinateur.
    # Le code ci dessous indique a cmake comment trouver la bibliotheque.
    set(SFML_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML/lib/cmake/SFML)
    set(SFML_STATIC_LIBRARIES TRUE)

    #target_include_directories(Echec PRIVATE ${CMAKE_SOURCE_DIR}/SFML/include)
    #include_directories(${SFML_INCLUDE_DIR})
    find_package(SFML COMPONENTS audio graphics window system network REQUIRED)
    target_link_libraries(Defeat_Olaf sfml-audio sfml-graphics sfml-window sfml-system)

else()
    message(FATAL_ERROR "Version du compilateur non compatible avec SFML. \n version actuelle : ${CMAKE_CXX_COMPILER_VERSION} \n version requise  : ${VERSION_REQUISE}")
endif()
