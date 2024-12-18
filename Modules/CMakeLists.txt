cmake_minimum_required (VERSION 3.20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../Rel)

project ("ModulesDLL")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set (SOURCES
sFigures.cpp
sTriangles.cpp
sRectangularTriangles.cpp
sIsoscelesTriangles.cpp
sEquilateralTriangles.cpp
sQuadrangles.cpp
sParallelograms.cpp
sRectangles.cpp
sRhombus.cpp
sSquares.cpp
)

set (HEADERS
sFigures.h
sTriangles.h
sRectangularTriangles.h
sIsoscelesTriangles.h
sEquilateralTriangles.h
sQuadrangles.h
sParallelograms.h
sRectangles.h
sRhombus.h
sSquares.h
)

add_library(FiguresLib SHARED ${HEADERS} ${SOURCES})