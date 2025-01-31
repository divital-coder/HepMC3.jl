# Export main types
export GenEvent, GenVertex, GenParticle, FourVector
export GenHeavyIon, GenPdfInfo, GenCrossSection

"""
    FourVector(x::Float64, y::Float64, z::Float64, t::Float64)

Create a new four-vector with components (x,y,z,t).
"""
FourVector(x::Float64, y::Float64, z::Float64, t::Float64) = 
    HepMC3.FourVector(x, y, z, t)

"""
    GenEvent(units::Int = -1)

Create a new GenEvent with optional units specification.
"""
GenEvent(units::Int = -1) = HepMC3.GenEvent(units)

# Add more high-level interface functions here