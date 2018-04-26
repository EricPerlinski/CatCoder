project(Exercise4)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise4 ${SOURCES})

target_include_directories(Exercise4
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
