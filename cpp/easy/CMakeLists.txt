file(GLOB PROBLEM_DIRS LIST_DIRECTORIES true CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*")

foreach(prob ${PROBLEM_DIRS})
  if(IS_DIRECTORY ${prob})
    get_filename_component(probName ${prob} NAME)
    add_subdirectory(${probName})
  endif()
endforeach()
