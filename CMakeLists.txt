cmake_minimum_required(VERSION 3.12)
project(weightfield2)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
find_package(ROOT REQUIRED COMPONENTS RIO Net)

include(${ROOT_USE_FILE})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/deps/yaml-cpp/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/deps/yaml-cpp/include/yaml-cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

link_directories(deps/yaml-cpp/build)

ROOT_GENERATE_DICTIONARY(G__Dict WFGUI.h LinkDef.h LINKDEF)
add_library(Dict SHARED src/WFGUI.cxx G__Dict.cxx)
target_link_libraries(Dict ${ROOT_LIBRARIES} Gui)

add_executable(weightfield2
        src/Carriers.cxx
        src/Field.cxx
        src/Potentials.cxx
        src/Weightfield.cxx
        src/WFGUI.cxx
        )

target_link_libraries(weightfield2 ${ROOT_LIBRARIES} Gui yaml-cpp Dict)


