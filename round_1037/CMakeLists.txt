# Add problem A if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/A_only_one_digit")
    add_subdirectory(A_only_one_digit)
endif()

# Add problem B if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/B_no_casino_in_the_mountains")
    add_subdirectory(B_no_casino_in_the_mountains)
endif()

# Add problem C if it exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/C_i_will_definitely_make_it")
    add_subdirectory(C_i_will_definitely_make_it)
endif()