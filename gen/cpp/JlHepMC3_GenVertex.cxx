// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlHepMC3.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<HepMC3::GenVertex> : std::false_type { };
  template<> struct DefaultConstructible<HepMC3::GenVertex> : std::false_type { };
}

// Class generating the wrapper for type HepMC3::GenVertex
// signature to use in the veto file: HepMC3::GenVertex
struct JlHepMC3_GenVertex: public Wrapper {

  JlHepMC3_GenVertex(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type HepMC3::GenVertex (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:29:7
    jlcxx::TypeWrapper<HepMC3::GenVertex>  t = jlModule.add_type<HepMC3::GenVertex>("HepMC3!GenVertex");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<HepMC3::GenVertex>>(new jlcxx::TypeWrapper<HepMC3::GenVertex>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::GenVertex(const HepMC3::FourVector &) (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:39:5
    t.constructor<const HepMC3::FourVector &>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::GenVertex(const HepMC3::GenVertexData &) (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:42:5
    t.constructor<const HepMC3::GenVertexData &>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for HepMC3::GenEvent * HepMC3::GenVertex::parent_event() (" __HERE__ ")");
    // signature to use in the veto list: HepMC3::GenEvent * HepMC3::GenVertex::parent_event()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:56:15
    t.method("parent_event", static_cast<HepMC3::GenEvent * (HepMC3::GenVertex::*)() >(&HepMC3::GenVertex::parent_event));

    DEBUG_MSG("Adding wrapper for const HepMC3::GenEvent * HepMC3::GenVertex::parent_event() (" __HERE__ ")");
    // signature to use in the veto list: const HepMC3::GenEvent * HepMC3::GenVertex::parent_event()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:59:21
    t.method("parent_event", static_cast<const HepMC3::GenEvent * (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::parent_event));

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenVertex::in_event() (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenVertex::in_event()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:62:10
    t.method("in_event", static_cast<bool (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::in_event));

    DEBUG_MSG("Adding wrapper for int HepMC3::GenVertex::id() (" __HERE__ ")");
    // signature to use in the veto list: int HepMC3::GenVertex::id()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:67:9
    t.method("id", static_cast<int (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::id));

    DEBUG_MSG("Adding wrapper for int HepMC3::GenVertex::status() (" __HERE__ ")");
    // signature to use in the veto list: int HepMC3::GenVertex::status()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:70:9
    t.method("status", static_cast<int (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::status));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::set_status(int) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::set_status(int)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:72:10
    t.method("set_status", static_cast<void (HepMC3::GenVertex::*)(int) >(&HepMC3::GenVertex::set_status));

    DEBUG_MSG("Adding wrapper for const HepMC3::GenVertexData & HepMC3::GenVertex::data() (" __HERE__ ")");
    // signature to use in the veto list: const HepMC3::GenVertexData & HepMC3::GenVertex::data()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:75:26
    t.method("data", static_cast<const HepMC3::GenVertexData & (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::data));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::add_particle_in(HepMC3::GenParticlePtr) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::add_particle_in(HepMC3::GenParticlePtr)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:78:10
    t.method("add_particle_in", static_cast<void (HepMC3::GenVertex::*)(HepMC3::GenParticlePtr) >(&HepMC3::GenVertex::add_particle_in));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::add_particle_out(HepMC3::GenParticlePtr) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::add_particle_out(HepMC3::GenParticlePtr)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:80:10
    t.method("add_particle_out", static_cast<void (HepMC3::GenVertex::*)(HepMC3::GenParticlePtr) >(&HepMC3::GenVertex::add_particle_out));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::remove_particle_in(HepMC3::GenParticlePtr) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::remove_particle_in(HepMC3::GenParticlePtr)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:82:10
    t.method("remove_particle_in", static_cast<void (HepMC3::GenVertex::*)(HepMC3::GenParticlePtr) >(&HepMC3::GenVertex::remove_particle_in));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::remove_particle_out(HepMC3::GenParticlePtr) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::remove_particle_out(HepMC3::GenParticlePtr)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:84:10
    t.method("remove_particle_out", static_cast<void (HepMC3::GenVertex::*)(HepMC3::GenParticlePtr) >(&HepMC3::GenVertex::remove_particle_out));

    DEBUG_MSG("Adding wrapper for int HepMC3::GenVertex::particles_in_size() (" __HERE__ ")");
    // signature to use in the veto list: int HepMC3::GenVertex::particles_in_size()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:87:16
    t.method("particles_in_size", static_cast<int (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::particles_in_size));

    DEBUG_MSG("Adding wrapper for int HepMC3::GenVertex::particles_out_size() (" __HERE__ ")");
    // signature to use in the veto list: int HepMC3::GenVertex::particles_out_size()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:89:16
    t.method("particles_out_size", static_cast<int (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::particles_out_size));

    DEBUG_MSG("Adding wrapper for const std::vector<HepMC3::GenParticlePtr> & HepMC3::GenVertex::particles_in() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<HepMC3::GenParticlePtr> & HepMC3::GenVertex::particles_in()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:93:40
    t.method("particles_in", static_cast<const std::vector<HepMC3::GenParticlePtr> & (HepMC3::GenVertex::*)() >(&HepMC3::GenVertex::particles_in));

    DEBUG_MSG("Adding wrapper for const std::vector<HepMC3::GenParticlePtr> & HepMC3::GenVertex::particles_out() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<HepMC3::GenParticlePtr> & HepMC3::GenVertex::particles_out()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:97:40
    t.method("particles_out", static_cast<const std::vector<HepMC3::GenParticlePtr> & (HepMC3::GenVertex::*)() >(&HepMC3::GenVertex::particles_out));

    DEBUG_MSG("Adding wrapper for const HepMC3::FourVector & HepMC3::GenVertex::position() (" __HERE__ ")");
    // signature to use in the veto list: const HepMC3::FourVector & HepMC3::GenVertex::position()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:107:23
    t.method("position", static_cast<const HepMC3::FourVector & (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::position));

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenVertex::has_set_position() (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenVertex::has_set_position()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:109:10
    t.method("has_set_position", static_cast<bool (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::has_set_position));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::set_position(const HepMC3::FourVector &) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::set_position(const HepMC3::FourVector &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:112:10
    t.method("set_position", static_cast<void (HepMC3::GenVertex::*)(const HepMC3::FourVector &) >(&HepMC3::GenVertex::set_position));

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenVertex::add_attribute(const std::string &, std::shared_ptr<HepMC3::Attribute>) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenVertex::add_attribute(const std::string &, std::shared_ptr<HepMC3::Attribute>)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:119:10
    t.method("add_attribute", static_cast<bool (HepMC3::GenVertex::*)(const std::string &, std::shared_ptr<HepMC3::Attribute>) >(&HepMC3::GenVertex::add_attribute));

    DEBUG_MSG("Adding wrapper for std::vector<std::string> HepMC3::GenVertex::attribute_names() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<std::string> HepMC3::GenVertex::attribute_names()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:122:30
    t.method("attribute_names", static_cast<std::vector<std::string> (HepMC3::GenVertex::*)()  const>(&HepMC3::GenVertex::attribute_names));

    DEBUG_MSG("Adding wrapper for void HepMC3::GenVertex::remove_attribute(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenVertex::remove_attribute(const std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:125:10
    t.method("remove_attribute", static_cast<void (HepMC3::GenVertex::*)(const std::string &) >(&HepMC3::GenVertex::remove_attribute));

    DEBUG_MSG("Adding wrapper for std::string HepMC3::GenVertex::attribute_as_string(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: std::string HepMC3::GenVertex::attribute_as_string(const std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenVertex.h:132:17
    t.method("attribute_as_string", static_cast<std::string (HepMC3::GenVertex::*)(const std::string &)  const>(&HepMC3::GenVertex::attribute_as_string));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<HepMC3::GenVertex>> type_;
};
std::shared_ptr<Wrapper> newJlHepMC3_GenVertex(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlHepMC3_GenVertex(module));
}
