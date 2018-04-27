project(Auction)
set(SOURCES
  src/Main.cc
  src/Bid.cc
)

add_executable(Auction ${SOURCES})

target_include_directories(Auction
        PRIVATE
                ${PROJECT_SOURCE_DIR}/include
)
