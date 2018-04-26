project(Exercise6)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise6 ${SOURCES})

target_include_directories(Exercise6
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
