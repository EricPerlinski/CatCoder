project(Rover)
set(SOURCES
        src/Car.cc
        src/Main.cc
)

add_executable(Rover ${SOURCES})

target_include_directories(Rover
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
