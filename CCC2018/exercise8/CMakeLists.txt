project(Exercise8)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise8 ${SOURCES})

target_include_directories(Exercise8
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
