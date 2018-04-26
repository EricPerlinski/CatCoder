project(Exercise5)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise5 ${SOURCES})

target_include_directories(Exercise5
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
