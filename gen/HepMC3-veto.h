// Veto file for exports from the HepMC3 headers
// To find the correct signature for the veto, examine the 
// CXX files that wrapit produces

// This is a base class, so I thought it would not be used directly
// However, it is needed!
// HepMC3::Attribute;

// Long double has no mapping in Julia, so we suppress it
HepMC3::LongDoubleAttribute;
HepMC3::VectorLongDoubleAttribute;

// Try to avoid an issue in CxxWrap where shared_ptr<T> and shared_ptr<const T>
// get confused: https://github.com/JuliaInterop/CxxWrap.jl/issues/405
// From GenParticle.h
std::vector<HepMC3::ConstGenParticlePtr> HepMC3::GenParticle::parents();
std::vector<HepMC3::ConstGenParticlePtr> HepMC3::GenParticle::children()

// From GenVertex.h
const std::vector<HepMC3::ConstGenParticlePtr> & HepMC3::GenVertex::particles_in()
const std::vector<HepMC3::ConstGenParticlePtr> & HepMC3::GenVertex::particles_out()
