# Add problem A if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/A_square_of_rectangles")
    add_subdirectory(A_square_of_rectangles)
endif()

# Add problem B if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/B_square_pool")
    add_subdirectory(B_square_pool)
endif()