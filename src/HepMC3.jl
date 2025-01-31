module HepMC3
    using CxxWrap
    using HepMC3_jll
    using Libdl  # Add this line

    # Check whether the wrappers have been build locally otherwise use the binary package
    gendir = normpath(joinpath(@__DIR__, "../gen"))
    if isdir(joinpath(gendir, "build/lib"))
        include(joinpath(gendir, "jl/src/HepMC3-export.jl"))
        @wrapmodule(()->joinpath(gendir, "build/lib", "libHepMC3Wrap.$(Libdl.dlext)"))
    else
        error("No wrapper library found. Please build the package first.")
    end

    function __init__()
        @initcxx
    end

    include("HepMC3Utils.jl")
    include("HepMC3Interface.jl")
end