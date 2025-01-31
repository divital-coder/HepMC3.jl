# test/runtests.jl
using HepMC3
using Test

@testset "HepMC3.jl" begin
    @testset "FourVector" begin
        # Create a simple four-vector
        v = FourVector(1.0, 2.0, 3.0, 4.0)
        
        # Test basic accessors
        @test px(v) ≈ 1.0
        @test py(v) ≈ 2.0
        @test pz(v) ≈ 3.0
        @test e(v) ≈ 4.0
    end

    @testset "GenEvent" begin
        # Create a simple event
        evt = GenEvent()
        @test !isnothing(evt)
    end
end

