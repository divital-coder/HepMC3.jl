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

// GenEvent.h
// This looks important, but it errors (undefined factory)
std::map<std::string,std::map<int,std::shared_ptr<HepMC3::Attribute>>> HepMC3::GenEvent::attributes()
std::map
void HepMC3::GenEvent::add_attributes(const std::string &, const std::vector<std::pair<int,std::shared_ptr<HepMC3::Attribute>>> &)

// GenHeavyIon.h
// Issues with map types!
HepMC3::GenHeavyIon::participant_plane_angles
HepMC3::GenHeavyIon::eccentricities

// More double registration issues
std::vector<HepMC3::ConstGenParticlePtr> HepMC3::GenEvent::beams()
std::vector<HepMC3::ConstGenParticlePtr> HepMC3::GenEvent::beams(const int)
HepMC3::ConstGenParticlePtr HepMC3::Attribute::particle()
const std::vector<HepMC3::ConstGenParticlePtr> & HepMC3::GenEvent::particles()
const std::vector<HepMC3::ConstGenVertexPtr> & HepMC3::GenEvent::vertices()
