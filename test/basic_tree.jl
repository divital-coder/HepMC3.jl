# Test the wrapped library for a very basic HepMC3 example
#

# Inline definition of the module, avoid the need for environment setup stuff
module HepMC3

using CxxWrap
using Libdl

wrapped_lib_path = joinpath(@__DIR__, "..", "gen", "build", "lib")

include(joinpath(@__DIR__, "..", "gen", "jl", "HepMC3-export.jl"))

@wrapmodule(()->joinpath(wrapped_lib_path, "libHepMC3Wrap.$(Libdl.dlext)"))

function __init__()
    @initcxx
end

end

# Import the library
using .HepMC3
