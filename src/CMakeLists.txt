cmake_minimum_required(VERSION 3.18.4)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(MAIN_SOURCES main.cpp Oktan.cpp)
set(CMAKE_PREFIX_PATH "/home/oktan/Qt/5.15.2/gcc_64/lib/cmake")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)



message("Looking for Qt...")

find_package(Qt5 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)

if(${Qt5_FOUND})
    message("Found Qt [${Qt5_VERSION}]")
else()
    message("Not Found Qt :(")
endif()

#qt5_generate_moc(main.cpp main.moc TARGET QtWeb)
qt5_wrap_cpp (MAIN_SOURCES ${MY_INCLUDE_DIR}/Oktan.h)


add_executable(QtWeb ${MAIN_SOURCES})

target_link_libraries(QtWeb Qt5::Core Qt5::Widgets Qt5::WebEngineCore Qt5::WebEngineWidgets)

target_include_directories(QtWeb PUBLIC ${MY_INCLUDE_DIR})
