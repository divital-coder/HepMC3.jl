using HepMC3
using Test

@testset "HepMC3.jl" begin
    # Test FourVector
    @testset "FourVector" begin
        v = FourVector(1.0, 2.0, 3.0, 4.0)
        @test px(v) ≈ 1.0
        @test py(v) ≈ 2.0
        @test pz(v) ≈ 3.0
        @test e(v) ≈ 4.0
    end

    # Test GenEvent
    @testset "GenEvent" begin
        evt = GenEvent()
        @test !isnothing(evt)
        # Add more event tests
    end
end