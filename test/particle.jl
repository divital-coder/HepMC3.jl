# Test the wrapped library for HepMC3 particles
#

using Test

include(joinpath(@__DIR__, "load_module.jl"))

@testset "HepMC3 Particle" begin
    my_particle = HepMC3!GenParticle()
    @test pid(my_particle) == 0
    @test pdg_id(my_particle) == 0
    @test set_pid(my_particle, 11) === nothing
    @test set_pdg_id(my_particle, 11) === nothing
    @test pid(my_particle) == 11
    @test pdg_id(my_particle) == 11

end
