project(Exercise9)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise9 ${SOURCES})

target_include_directories(Exercise9
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
