# Iterate difficulty folders
file(GLOB PROBLEM_DIRS LIST_DIRECTORIES true CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*")
foreach(d ${PROBLEM_DIRS})
  if(IS_DIRECTORY ${d})
    get_filename_component(name ${d} NAME)
    add_subdirectory(${name})
  endif()
endforeach()