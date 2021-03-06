cmake_minimum_required(VERSION 3.20.2)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mikompilation)

add_subdirectory(common)

add_subdirectory(third-party)

add_subdirectory(engine)

add_subdirectory(game)

add_subdirectory(ui)

set(SOURCES
        src/main.cpp
        )

if (WIN32)
    set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/icon.rc")
ENDIF ()

add_executable(Mikompilation ${SOURCES} ${APP_ICON_RESOURCE_WINDOWS})

target_link_libraries(Mikompilation PUBLIC
        ${UI_LIB}
        ${GAME_LIB}
        ${ENGINE_LIB}
        )

target_include_directories(Mikompilation PUBLIC
        ${UI_INCLUDE_DIRS}
        ${GAME_INCLUDE_DIRS}
        ${ENGINE_INCLUDE_DIRS}
        )

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/resources $<TARGET_FILE_DIR:${PROJECT_NAME}>/resources)

file(
        GENERATE
        OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/CopyConfigurationData$<CONFIG>.cmake"
        CONTENT "file(
                    COPY \"${PROJECT_SOURCE_DIR}/game_files\"
                    DESTINATION \"$<TARGET_FILE_DIR:${PROJECT_NAME}>/game_files\"
                 )"
)