file(GLOB PROBLEM_DIRS LIST_DIRECTORIES true CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*")

foreach(PROBLEM_DIRS ${PROBLEM_DIRS})
  if(IS_DIRECTORY ${PROBLEM_DIRS})
    get_filename_component(probName ${PROBLEM_DIRS} NAME)
    add_subdirectory(${probName})
  endif()
endforeach()