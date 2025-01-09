cmake_minimum_required(VERSION 3.16)

project(Timirbaev_Ernest_Qt_lab4 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        timirbaev_ernest_mainwindow.cpp
        timirbaev_ernest_mainwindow.h
        timirbaev_ernest_mainwindow.ui
)

#boost
set(Boost_ROOT "C:/Users/timir/Downloads/boost_1_86_0")
set(Boost_NO_WARN_NEW_VERSIONS 1)
find_package(Boost 1.86.0 REQUIRED COMPONENTS serialization)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    link_libraries(${Boost_LIBRARIES})
endif()
#

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Timirbaev_Ernest_Qt_lab4
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        timirbaev_defect_product.h timirbaev_defect_product.cpp
        timirbaev_product.h timirbaev_product.cpp
        timirbaev_table.h timirbaev_table.cpp
        Timirbaev_Utils.h
        timirbaev_warehouse.h timirbaev_warehouse.cpp
        timirbaev_dialog.h timirbaev_dialog.cpp timirbaev_dialog.ui
        timirbaev_add_dialog.h timirbaev_add_dialog.cpp timirbaev_add_dialog.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Timirbaev_Ernest_Qt_lab4 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Timirbaev_Ernest_Qt_lab4 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Timirbaev_Ernest_Qt_lab4
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Timirbaev_Ernest_Qt_lab4 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Timirbaev_Ernest_Qt_lab4)
endif()
set_target_properties(Timirbaev_Ernest_Qt_lab4 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Timirbaev_Ernest_Qt_lab4
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Timirbaev_Ernest_Qt_lab4)
endif()
