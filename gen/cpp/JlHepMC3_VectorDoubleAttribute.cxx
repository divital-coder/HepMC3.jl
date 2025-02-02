// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlHepMC3.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<HepMC3::VectorDoubleAttribute> : std::false_type { };
  template<> struct DefaultConstructible<HepMC3::VectorDoubleAttribute> : std::false_type { };
template<> struct SuperType<HepMC3::VectorDoubleAttribute> { typedef HepMC3::Attribute type; };
}

// Class generating the wrapper for type HepMC3::VectorDoubleAttribute
// signature to use in the veto file: HepMC3::VectorDoubleAttribute
struct JlHepMC3_VectorDoubleAttribute: public Wrapper {

  JlHepMC3_VectorDoubleAttribute(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type HepMC3::VectorDoubleAttribute (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1134:7
    jlcxx::TypeWrapper<HepMC3::VectorDoubleAttribute>  t = jlModule.add_type<HepMC3::VectorDoubleAttribute>("HepMC3!VectorDoubleAttribute",
      jlcxx::julia_base_type<HepMC3::Attribute>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<HepMC3::VectorDoubleAttribute>>(new jlcxx::TypeWrapper<HepMC3::VectorDoubleAttribute>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void HepMC3::VectorDoubleAttribute::VectorDoubleAttribute(std::vector<double>) (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1141:5
    t.constructor<std::vector<double>>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool HepMC3::VectorDoubleAttribute::from_string(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::VectorDoubleAttribute::from_string(const std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1144:10
    t.method("from_string", static_cast<bool (HepMC3::VectorDoubleAttribute::*)(const std::string &) >(&HepMC3::VectorDoubleAttribute::from_string));

    DEBUG_MSG("Adding wrapper for bool HepMC3::VectorDoubleAttribute::to_string(std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::VectorDoubleAttribute::to_string(std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1154:10
    t.method("to_string", static_cast<bool (HepMC3::VectorDoubleAttribute::*)(std::string &)  const>(&HepMC3::VectorDoubleAttribute::to_string));

    DEBUG_MSG("Adding wrapper for std::vector<double> HepMC3::VectorDoubleAttribute::value() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<double> HepMC3::VectorDoubleAttribute::value()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1161:25
    t.method("value", static_cast<std::vector<double> (HepMC3::VectorDoubleAttribute::*)()  const>(&HepMC3::VectorDoubleAttribute::value));

    DEBUG_MSG("Adding wrapper for void HepMC3::VectorDoubleAttribute::set_value(const std::vector<double> &) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::VectorDoubleAttribute::set_value(const std::vector<double> &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:1166:10
    t.method("set_value", static_cast<void (HepMC3::VectorDoubleAttribute::*)(const std::vector<double> &) >(&HepMC3::VectorDoubleAttribute::set_value));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<HepMC3::VectorDoubleAttribute>> type_;
};
std::shared_ptr<Wrapper> newJlHepMC3_VectorDoubleAttribute(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlHepMC3_VectorDoubleAttribute(module));
}
