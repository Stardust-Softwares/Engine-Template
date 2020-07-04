#usage: glad_version(MAJOR) or glad_version(MINOR)
function(define_glad_version)
    if(${GLAD_VERSION} MATCHES "gl33core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=3")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=3")
    elseif(${GLAD_VERSION} MATCHES "gl40core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=0")
    elseif(${GLAD_VERSION} MATCHES "gl41core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=1")
    elseif(${GLAD_VERSION} MATCHES "gl42core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=2")
    elseif(${GLAD_VERSION} MATCHES "gl43core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=3")
    elseif(${GLAD_VERSION} MATCHES "gl44core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=4")
    elseif(${GLAD_VERSION} MATCHES "gl45core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=5")
    elseif(${GLAD_VERSION} MATCHES "gl46core")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MAJOR=4")
        target_compile_definitions(${api_target} PUBLIC "-DGL_MINOR=6")
    else()
        message(FATAL_ERROR "unknown glad version ${GLAD_VERSION}")
    endif()
endfunction()