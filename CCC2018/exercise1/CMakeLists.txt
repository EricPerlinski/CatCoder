project(Exercise1)
set(SOURCES
        src/Main.cc
)

add_executable(Exercise1 ${SOURCES})

target_include_directories(Exercise1
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
