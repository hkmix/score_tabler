add_library(
    util
    OBJECT
    data.cc
)

target_compile_features(
    util
    PRIVATE
    cxx_std_17
)
