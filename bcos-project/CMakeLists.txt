file(GLOB_RECURSE SRC_LIST "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")

add_library(${BCOS_PROJECT_TARGET} ${SRC_LIST} ${HEADERS})
target_compile_options(${BCOS_PROJECT_TARGET} PRIVATE -Wno-error -Wno-unused-variable)
target_link_libraries(${BCOS_PROJECT_TARGET} PUBLIC tarscpp::tarsutil)
