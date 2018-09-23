add_executable(
    score_tabler
    main.cc
)

target_compile_features(
    score_tabler
    PRIVATE
    cxx_std_17
)
