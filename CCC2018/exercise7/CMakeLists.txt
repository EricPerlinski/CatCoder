project(Exercise7)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise7 ${SOURCES})

target_include_directories(Exercise7
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
