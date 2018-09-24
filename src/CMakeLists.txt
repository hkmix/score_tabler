add_executable(
    score_tabler
    main.cc
)

target_compile_features(
    score_tabler
    PRIVATE
    cxx_std_17
)

target_link_libraries(
    score_tabler
    PRIVATE
    ${CONAN_LIBS}
)
