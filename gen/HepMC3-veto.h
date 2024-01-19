// Veto file for exports from the HepMC3 headers
// To find the correct signature for the veto, examine the 
// CXX files that wrapit produces

// Long double has no mapping in Julia, so we suppress it
HepMC3::LongDoubleAttribute;
HepMC3::VectorLongDoubleAttribute;

