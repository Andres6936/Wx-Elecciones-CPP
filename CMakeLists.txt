CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(N1-Elecciones-C++)

SET(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(Include)

# Necessary
#cmake .. -DwxWidgets_CONFIG_EXECUTABLE=/usr/local/bin/wx-config

#SET(wxWidgets_CONFIG_OPTIONS --toolkit=base --prefix=/usr)
#SET(wxWidgets_CONFIG_EXECUTABLE </usr/local/bin/wx-config>)
SET(wxWidgets_ROOT_DIR </usr/local/include/wx-3.0>)
SET(wxWidgets_CONFIGURATION mswu)

FIND_PACKAGE(wxWidgets COMPONENTS net gl core base REQUIRED)

INCLUDE(${wxWidgets_USE_FILE})

SET(SOURCE_FILES Source/WinMain.cpp
        Source/Mundo/Candidato.cpp
        Source/Mundo/Urna.cpp
        Source/Interfaz/InterfazElecciones.cpp
        Source/Interfaz/PanelCandidato.cpp
        Source/Interfaz/PanelExtension.cpp
        Source/Interfaz/PanelImagen.cpp
        Source/Interfaz/PanelUrna.cpp)

ADD_EXECUTABLE(Comprobando ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(Comprobando ${wxWidgets_LIBRARIES})
