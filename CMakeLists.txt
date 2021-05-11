
# set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# all cpp files
file(GLOB_RECURSE CPP_SRC_LIST ${CMAKE_CURRENT_LIST_DIR}/exercises/*/*.cc)

# generate target for every cpp file
foreach(v ${CPP_SRC_LIST})
    message("${v}")
    # file relative path from exercises/
    string(REGEX MATCH "exercises/.*" relative_path ${v})
    message("${relative_path}")
    # delete string "exercises/"
    string(REGEX REPLACE "exercises/" "" target_name ${relative_path})
    message("${target_name}")
    # rename '/' and '.' to '_'
    string(REGEX REPLACE "/|\\." "_" target_name ${target_name})
    message("${target_name}")

    add_executable(${target_name} ${v})
endforeach()