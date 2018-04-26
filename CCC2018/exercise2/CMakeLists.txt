project(Exercise2)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise2 ${SOURCES})

target_include_directories(Exercise2
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
