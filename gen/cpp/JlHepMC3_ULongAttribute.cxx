// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlHepMC3.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<HepMC3::ULongAttribute> : std::false_type { };
  template<> struct DefaultConstructible<HepMC3::ULongAttribute> : std::false_type { };
template<> struct SuperType<HepMC3::ULongAttribute> { typedef HepMC3::Attribute type; };
}

// Class generating the wrapper for type HepMC3::ULongAttribute
// signature to use in the veto file: HepMC3::ULongAttribute
struct JlHepMC3_ULongAttribute: public Wrapper {

  JlHepMC3_ULongAttribute(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type HepMC3::ULongAttribute (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:573:7
    jlcxx::TypeWrapper<HepMC3::ULongAttribute>  t = jlModule.add_type<HepMC3::ULongAttribute>("HepMC3!ULongAttribute",
      jlcxx::julia_base_type<HepMC3::Attribute>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<HepMC3::ULongAttribute>>(new jlcxx::TypeWrapper<HepMC3::ULongAttribute>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void HepMC3::ULongAttribute::ULongAttribute(unsigned long) (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:580:5
    t.constructor<unsigned long>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool HepMC3::ULongAttribute::from_string(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::ULongAttribute::from_string(const std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:583:10
    t.method("from_string", static_cast<bool (HepMC3::ULongAttribute::*)(const std::string &) >(&HepMC3::ULongAttribute::from_string));

    DEBUG_MSG("Adding wrapper for bool HepMC3::ULongAttribute::to_string(std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::ULongAttribute::to_string(std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:590:10
    t.method("to_string", static_cast<bool (HepMC3::ULongAttribute::*)(std::string &)  const>(&HepMC3::ULongAttribute::to_string));

    DEBUG_MSG("Adding wrapper for unsigned long HepMC3::ULongAttribute::value() (" __HERE__ ")");
    // signature to use in the veto list: unsigned long HepMC3::ULongAttribute::value()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:596:19
    t.method("value", static_cast<unsigned long (HepMC3::ULongAttribute::*)()  const>(&HepMC3::ULongAttribute::value));

    DEBUG_MSG("Adding wrapper for void HepMC3::ULongAttribute::set_value(const unsigned long &) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::ULongAttribute::set_value(const unsigned long &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/Attribute.h:601:10
    t.method("set_value", static_cast<void (HepMC3::ULongAttribute::*)(const unsigned long &) >(&HepMC3::ULongAttribute::set_value));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<HepMC3::ULongAttribute>> type_;
};
std::shared_ptr<Wrapper> newJlHepMC3_ULongAttribute(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlHepMC3_ULongAttribute(module));
}
