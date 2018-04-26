project(Exercise3)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise3 ${SOURCES})

target_include_directories(Exercise3
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
