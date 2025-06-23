# Add problem A if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/A_race")
    add_subdirectory(A_race)
endif()

# Add problem B if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/B_shrinking_array")
    add_subdirectory(B_shrinking_array)
endif()

# Add problem C if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/C_coloring_game")
    add_subdirectory(C_coloring_game)
endif ()