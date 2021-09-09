cmake_minimum_required(VERSION 3.4.1)

find_package(Boost 1.65 COMPONENTS filesystem REQUIRED)

file(GLOB SRC_FILES "*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME}
    PRIVATE Boost::filesystem
    PRIVATE prog-arg-manager
    )
