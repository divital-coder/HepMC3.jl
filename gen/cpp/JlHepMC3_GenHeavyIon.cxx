// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlHepMC3.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<HepMC3::GenHeavyIon> : std::false_type { };
  template<> struct DefaultConstructible<HepMC3::GenHeavyIon> : std::false_type { };
template<> struct SuperType<HepMC3::GenHeavyIon> { typedef HepMC3::Attribute type; };
}

// Class generating the wrapper for type HepMC3::GenHeavyIon
// signature to use in the veto file: HepMC3::GenHeavyIon
struct JlHepMC3_GenHeavyIon: public Wrapper {

  JlHepMC3_GenHeavyIon(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type HepMC3::GenHeavyIon (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:26:7
    jlcxx::TypeWrapper<HepMC3::GenHeavyIon>  t = jlModule.add_type<HepMC3::GenHeavyIon>("HepMC3!GenHeavyIon",
      jlcxx::julia_base_type<HepMC3::Attribute>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<HepMC3::GenHeavyIon>>(new jlcxx::TypeWrapper<HepMC3::GenHeavyIon>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenHeavyIon::from_string(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenHeavyIon::from_string(const std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:207:10
    t.method("from_string", static_cast<bool (HepMC3::GenHeavyIon::*)(const std::string &) >(&HepMC3::GenHeavyIon::from_string));

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenHeavyIon::to_string(std::string &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenHeavyIon::to_string(std::string &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:210:10
    t.method("to_string", static_cast<bool (HepMC3::GenHeavyIon::*)(std::string &)  const>(&HepMC3::GenHeavyIon::to_string));
    module_.set_override_module(jl_base_module);

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenHeavyIon::operator==(const HepMC3::GenHeavyIon &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenHeavyIon::operator==(const HepMC3::GenHeavyIon &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:216:10
    t.method("==", static_cast<bool (HepMC3::GenHeavyIon::*)(const HepMC3::GenHeavyIon &)  const>(&HepMC3::GenHeavyIon::operator==));

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenHeavyIon::operator!=(const HepMC3::GenHeavyIon &) (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenHeavyIon::operator!=(const HepMC3::GenHeavyIon &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:219:10
    t.method("!=", static_cast<bool (HepMC3::GenHeavyIon::*)(const HepMC3::GenHeavyIon &)  const>(&HepMC3::GenHeavyIon::operator!=));

    module_.unset_override_module();

    DEBUG_MSG("Adding wrapper for void HepMC3::GenHeavyIon::set(const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const double &, const double &, const double &, const double &, const double &, const double &) (" __HERE__ ")");
    // signature to use in the veto list: void HepMC3::GenHeavyIon::set(const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const double &, const double &, const double &, const double &, const double &, const double &)
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:225:10
    t.method("set", static_cast<void (HepMC3::GenHeavyIon::*)(const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const int &, const double &, const double &, const double &, const double &, const double &, const double &) >(&HepMC3::GenHeavyIon::set));
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11, const double & arg12)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12); });
    t.method("set", [](HepMC3::GenHeavyIon& a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11, const double & arg12, const double & arg13)->void { a.set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11, const double & arg12)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12); });
    t.method("set", [](HepMC3::GenHeavyIon* a, const int & arg0, const int & arg1, const int & arg2, const int & arg3, const int & arg4, const int & arg5, const int & arg6, const int & arg7, const int & arg8, const double & arg9, const double & arg10, const double & arg11, const double & arg12, const double & arg13)->void { a->set(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13); });

    DEBUG_MSG("Adding wrapper for bool HepMC3::GenHeavyIon::is_valid() (" __HERE__ ")");
    // signature to use in the veto list: bool HepMC3::GenHeavyIon::is_valid()
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:232:10
    t.method("is_valid", static_cast<bool (HepMC3::GenHeavyIon::*)()  const>(&HepMC3::GenHeavyIon::is_valid));

    DEBUG_MSG("Adding Ncoll_hard methods  to provide read access to the field Ncoll_hard (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:57:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Ncoll_hard
    t.method("Ncoll_hard", [](const HepMC3::GenHeavyIon& a) -> int { return a.Ncoll_hard; });
    t.method("Ncoll_hard", [](HepMC3::GenHeavyIon& a) -> int { return a.Ncoll_hard; });
    t.method("Ncoll_hard", [](const HepMC3::GenHeavyIon* a) -> int { return a->Ncoll_hard; });
    t.method("Ncoll_hard", [](HepMC3::GenHeavyIon* a) -> int { return a->Ncoll_hard; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:57:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Ncoll_hard
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Ncoll_hard! methods to provide write access to the field Ncoll_hard (" __HERE__ ")");
    t.method("Ncoll_hard!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Ncoll_hard = val; });

    DEBUG_MSG("Adding Ncoll_hard! methods to provide write access to the field Ncoll_hard (" __HERE__ ")");
    t.method("Ncoll_hard!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Ncoll_hard = val; });

    DEBUG_MSG("Adding Npart_proj methods  to provide read access to the field Npart_proj (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:64:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Npart_proj
    t.method("Npart_proj", [](const HepMC3::GenHeavyIon& a) -> int { return a.Npart_proj; });
    t.method("Npart_proj", [](HepMC3::GenHeavyIon& a) -> int { return a.Npart_proj; });
    t.method("Npart_proj", [](const HepMC3::GenHeavyIon* a) -> int { return a->Npart_proj; });
    t.method("Npart_proj", [](HepMC3::GenHeavyIon* a) -> int { return a->Npart_proj; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:64:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Npart_proj
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Npart_proj! methods to provide write access to the field Npart_proj (" __HERE__ ")");
    t.method("Npart_proj!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Npart_proj = val; });

    DEBUG_MSG("Adding Npart_proj! methods to provide write access to the field Npart_proj (" __HERE__ ")");
    t.method("Npart_proj!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Npart_proj = val; });

    DEBUG_MSG("Adding Npart_targ methods  to provide read access to the field Npart_targ (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:71:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Npart_targ
    t.method("Npart_targ", [](const HepMC3::GenHeavyIon& a) -> int { return a.Npart_targ; });
    t.method("Npart_targ", [](HepMC3::GenHeavyIon& a) -> int { return a.Npart_targ; });
    t.method("Npart_targ", [](const HepMC3::GenHeavyIon* a) -> int { return a->Npart_targ; });
    t.method("Npart_targ", [](HepMC3::GenHeavyIon* a) -> int { return a->Npart_targ; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:71:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Npart_targ
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Npart_targ! methods to provide write access to the field Npart_targ (" __HERE__ ")");
    t.method("Npart_targ!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Npart_targ = val; });

    DEBUG_MSG("Adding Npart_targ! methods to provide write access to the field Npart_targ (" __HERE__ ")");
    t.method("Npart_targ!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Npart_targ = val; });

    DEBUG_MSG("Adding Ncoll methods  to provide read access to the field Ncoll (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:80:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Ncoll
    t.method("Ncoll", [](const HepMC3::GenHeavyIon& a) -> int { return a.Ncoll; });
    t.method("Ncoll", [](HepMC3::GenHeavyIon& a) -> int { return a.Ncoll; });
    t.method("Ncoll", [](const HepMC3::GenHeavyIon* a) -> int { return a->Ncoll; });
    t.method("Ncoll", [](HepMC3::GenHeavyIon* a) -> int { return a->Ncoll; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:80:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Ncoll
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Ncoll! methods to provide write access to the field Ncoll (" __HERE__ ")");
    t.method("Ncoll!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Ncoll = val; });

    DEBUG_MSG("Adding Ncoll! methods to provide write access to the field Ncoll (" __HERE__ ")");
    t.method("Ncoll!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Ncoll = val; });

    DEBUG_MSG("Adding spectator_neutrons methods  to provide read access to the field spectator_neutrons (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:86:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::spectator_neutrons
    t.method("spectator_neutrons", [](const HepMC3::GenHeavyIon& a) -> int { return a.spectator_neutrons; });
    t.method("spectator_neutrons", [](HepMC3::GenHeavyIon& a) -> int { return a.spectator_neutrons; });
    t.method("spectator_neutrons", [](const HepMC3::GenHeavyIon* a) -> int { return a->spectator_neutrons; });
    t.method("spectator_neutrons", [](HepMC3::GenHeavyIon* a) -> int { return a->spectator_neutrons; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:86:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::spectator_neutrons
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding spectator_neutrons! methods to provide write access to the field spectator_neutrons (" __HERE__ ")");
    t.method("spectator_neutrons!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.spectator_neutrons = val; });

    DEBUG_MSG("Adding spectator_neutrons! methods to provide write access to the field spectator_neutrons (" __HERE__ ")");
    t.method("spectator_neutrons!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->spectator_neutrons = val; });

    DEBUG_MSG("Adding spectator_protons methods  to provide read access to the field spectator_protons (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:91:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::spectator_protons
    t.method("spectator_protons", [](const HepMC3::GenHeavyIon& a) -> int { return a.spectator_protons; });
    t.method("spectator_protons", [](HepMC3::GenHeavyIon& a) -> int { return a.spectator_protons; });
    t.method("spectator_protons", [](const HepMC3::GenHeavyIon* a) -> int { return a->spectator_protons; });
    t.method("spectator_protons", [](HepMC3::GenHeavyIon* a) -> int { return a->spectator_protons; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:91:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::spectator_protons
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding spectator_protons! methods to provide write access to the field spectator_protons (" __HERE__ ")");
    t.method("spectator_protons!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.spectator_protons = val; });

    DEBUG_MSG("Adding spectator_protons! methods to provide write access to the field spectator_protons (" __HERE__ ")");
    t.method("spectator_protons!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->spectator_protons = val; });

    DEBUG_MSG("Adding N_Nwounded_collisions methods  to provide read access to the field N_Nwounded_collisions (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:99:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::N_Nwounded_collisions
    t.method("N_Nwounded_collisions", [](const HepMC3::GenHeavyIon& a) -> int { return a.N_Nwounded_collisions; });
    t.method("N_Nwounded_collisions", [](HepMC3::GenHeavyIon& a) -> int { return a.N_Nwounded_collisions; });
    t.method("N_Nwounded_collisions", [](const HepMC3::GenHeavyIon* a) -> int { return a->N_Nwounded_collisions; });
    t.method("N_Nwounded_collisions", [](HepMC3::GenHeavyIon* a) -> int { return a->N_Nwounded_collisions; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:99:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::N_Nwounded_collisions
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding N_Nwounded_collisions! methods to provide write access to the field N_Nwounded_collisions (" __HERE__ ")");
    t.method("N_Nwounded_collisions!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.N_Nwounded_collisions = val; });

    DEBUG_MSG("Adding N_Nwounded_collisions! methods to provide write access to the field N_Nwounded_collisions (" __HERE__ ")");
    t.method("N_Nwounded_collisions!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->N_Nwounded_collisions = val; });

    DEBUG_MSG("Adding Nwounded_N_collisions methods  to provide read access to the field Nwounded_N_collisions (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:106:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nwounded_N_collisions
    t.method("Nwounded_N_collisions", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nwounded_N_collisions; });
    t.method("Nwounded_N_collisions", [](HepMC3::GenHeavyIon& a) -> int { return a.Nwounded_N_collisions; });
    t.method("Nwounded_N_collisions", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nwounded_N_collisions; });
    t.method("Nwounded_N_collisions", [](HepMC3::GenHeavyIon* a) -> int { return a->Nwounded_N_collisions; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:106:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nwounded_N_collisions
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nwounded_N_collisions! methods to provide write access to the field Nwounded_N_collisions (" __HERE__ ")");
    t.method("Nwounded_N_collisions!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nwounded_N_collisions = val; });

    DEBUG_MSG("Adding Nwounded_N_collisions! methods to provide write access to the field Nwounded_N_collisions (" __HERE__ ")");
    t.method("Nwounded_N_collisions!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nwounded_N_collisions = val; });

    DEBUG_MSG("Adding Nwounded_Nwounded_collisions methods  to provide read access to the field Nwounded_Nwounded_collisions (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:113:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nwounded_Nwounded_collisions
    t.method("Nwounded_Nwounded_collisions", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nwounded_Nwounded_collisions; });
    t.method("Nwounded_Nwounded_collisions", [](HepMC3::GenHeavyIon& a) -> int { return a.Nwounded_Nwounded_collisions; });
    t.method("Nwounded_Nwounded_collisions", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nwounded_Nwounded_collisions; });
    t.method("Nwounded_Nwounded_collisions", [](HepMC3::GenHeavyIon* a) -> int { return a->Nwounded_Nwounded_collisions; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:113:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nwounded_Nwounded_collisions
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nwounded_Nwounded_collisions! methods to provide write access to the field Nwounded_Nwounded_collisions (" __HERE__ ")");
    t.method("Nwounded_Nwounded_collisions!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nwounded_Nwounded_collisions = val; });

    DEBUG_MSG("Adding Nwounded_Nwounded_collisions! methods to provide write access to the field Nwounded_Nwounded_collisions (" __HERE__ ")");
    t.method("Nwounded_Nwounded_collisions!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nwounded_Nwounded_collisions = val; });

    DEBUG_MSG("Adding impact_parameter methods  to provide read access to the field impact_parameter (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:119:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::impact_parameter
    t.method("impact_parameter", [](const HepMC3::GenHeavyIon& a) -> double { return a.impact_parameter; });
    t.method("impact_parameter", [](HepMC3::GenHeavyIon& a) -> double { return a.impact_parameter; });
    t.method("impact_parameter", [](const HepMC3::GenHeavyIon* a) -> double { return a->impact_parameter; });
    t.method("impact_parameter", [](HepMC3::GenHeavyIon* a) -> double { return a->impact_parameter; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:119:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::impact_parameter
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding impact_parameter! methods to provide write access to the field impact_parameter (" __HERE__ ")");
    t.method("impact_parameter!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.impact_parameter = val; });

    DEBUG_MSG("Adding impact_parameter! methods to provide write access to the field impact_parameter (" __HERE__ ")");
    t.method("impact_parameter!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->impact_parameter = val; });

    DEBUG_MSG("Adding event_plane_angle methods  to provide read access to the field event_plane_angle (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:127:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::event_plane_angle
    t.method("event_plane_angle", [](const HepMC3::GenHeavyIon& a) -> double { return a.event_plane_angle; });
    t.method("event_plane_angle", [](HepMC3::GenHeavyIon& a) -> double { return a.event_plane_angle; });
    t.method("event_plane_angle", [](const HepMC3::GenHeavyIon* a) -> double { return a->event_plane_angle; });
    t.method("event_plane_angle", [](HepMC3::GenHeavyIon* a) -> double { return a->event_plane_angle; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:127:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::event_plane_angle
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding event_plane_angle! methods to provide write access to the field event_plane_angle (" __HERE__ ")");
    t.method("event_plane_angle!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.event_plane_angle = val; });

    DEBUG_MSG("Adding event_plane_angle! methods to provide write access to the field event_plane_angle (" __HERE__ ")");
    t.method("event_plane_angle!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->event_plane_angle = val; });

    DEBUG_MSG("Adding eccentricity methods  to provide read access to the field eccentricity (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:133:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::eccentricity
    t.method("eccentricity", [](const HepMC3::GenHeavyIon& a) -> double { return a.eccentricity; });
    t.method("eccentricity", [](HepMC3::GenHeavyIon& a) -> double { return a.eccentricity; });
    t.method("eccentricity", [](const HepMC3::GenHeavyIon* a) -> double { return a->eccentricity; });
    t.method("eccentricity", [](HepMC3::GenHeavyIon* a) -> double { return a->eccentricity; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:133:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::eccentricity
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding eccentricity! methods to provide write access to the field eccentricity (" __HERE__ ")");
    t.method("eccentricity!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.eccentricity = val; });

    DEBUG_MSG("Adding eccentricity! methods to provide write access to the field eccentricity (" __HERE__ ")");
    t.method("eccentricity!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->eccentricity = val; });

    DEBUG_MSG("Adding sigma_inel_NN methods  to provide read access to the field sigma_inel_NN (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:141:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::sigma_inel_NN
    t.method("sigma_inel_NN", [](const HepMC3::GenHeavyIon& a) -> double { return a.sigma_inel_NN; });
    t.method("sigma_inel_NN", [](HepMC3::GenHeavyIon& a) -> double { return a.sigma_inel_NN; });
    t.method("sigma_inel_NN", [](const HepMC3::GenHeavyIon* a) -> double { return a->sigma_inel_NN; });
    t.method("sigma_inel_NN", [](HepMC3::GenHeavyIon* a) -> double { return a->sigma_inel_NN; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:141:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::sigma_inel_NN
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding sigma_inel_NN! methods to provide write access to the field sigma_inel_NN (" __HERE__ ")");
    t.method("sigma_inel_NN!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.sigma_inel_NN = val; });

    DEBUG_MSG("Adding sigma_inel_NN! methods to provide write access to the field sigma_inel_NN (" __HERE__ ")");
    t.method("sigma_inel_NN!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->sigma_inel_NN = val; });

    DEBUG_MSG("Adding centrality methods  to provide read access to the field centrality (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:148:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::centrality
    t.method("centrality", [](const HepMC3::GenHeavyIon& a) -> double { return a.centrality; });
    t.method("centrality", [](HepMC3::GenHeavyIon& a) -> double { return a.centrality; });
    t.method("centrality", [](const HepMC3::GenHeavyIon* a) -> double { return a->centrality; });
    t.method("centrality", [](HepMC3::GenHeavyIon* a) -> double { return a->centrality; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:148:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::centrality
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding centrality! methods to provide write access to the field centrality (" __HERE__ ")");
    t.method("centrality!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.centrality = val; });

    DEBUG_MSG("Adding centrality! methods to provide write access to the field centrality (" __HERE__ ")");
    t.method("centrality!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->centrality = val; });

    DEBUG_MSG("Adding user_cent_estimate methods  to provide read access to the field user_cent_estimate (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:157:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::user_cent_estimate
    t.method("user_cent_estimate", [](const HepMC3::GenHeavyIon& a) -> double { return a.user_cent_estimate; });
    t.method("user_cent_estimate", [](HepMC3::GenHeavyIon& a) -> double { return a.user_cent_estimate; });
    t.method("user_cent_estimate", [](const HepMC3::GenHeavyIon* a) -> double { return a->user_cent_estimate; });
    t.method("user_cent_estimate", [](HepMC3::GenHeavyIon* a) -> double { return a->user_cent_estimate; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:157:12
    // signature to use in the veto list: HepMC3::GenHeavyIon::user_cent_estimate
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding user_cent_estimate! methods to provide write access to the field user_cent_estimate (" __HERE__ ")");
    t.method("user_cent_estimate!", [](HepMC3::GenHeavyIon& a, double val) -> double { return a.user_cent_estimate = val; });

    DEBUG_MSG("Adding user_cent_estimate! methods to provide write access to the field user_cent_estimate (" __HERE__ ")");
    t.method("user_cent_estimate!", [](HepMC3::GenHeavyIon* a, double val) -> double { return a->user_cent_estimate = val; });

    DEBUG_MSG("Adding Nspec_proj_n methods  to provide read access to the field Nspec_proj_n (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:165:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_proj_n
    t.method("Nspec_proj_n", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nspec_proj_n; });
    t.method("Nspec_proj_n", [](HepMC3::GenHeavyIon& a) -> int { return a.Nspec_proj_n; });
    t.method("Nspec_proj_n", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nspec_proj_n; });
    t.method("Nspec_proj_n", [](HepMC3::GenHeavyIon* a) -> int { return a->Nspec_proj_n; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:165:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_proj_n
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nspec_proj_n! methods to provide write access to the field Nspec_proj_n (" __HERE__ ")");
    t.method("Nspec_proj_n!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nspec_proj_n = val; });

    DEBUG_MSG("Adding Nspec_proj_n! methods to provide write access to the field Nspec_proj_n (" __HERE__ ")");
    t.method("Nspec_proj_n!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nspec_proj_n = val; });

    DEBUG_MSG("Adding Nspec_targ_n methods  to provide read access to the field Nspec_targ_n (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:172:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_targ_n
    t.method("Nspec_targ_n", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nspec_targ_n; });
    t.method("Nspec_targ_n", [](HepMC3::GenHeavyIon& a) -> int { return a.Nspec_targ_n; });
    t.method("Nspec_targ_n", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nspec_targ_n; });
    t.method("Nspec_targ_n", [](HepMC3::GenHeavyIon* a) -> int { return a->Nspec_targ_n; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:172:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_targ_n
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nspec_targ_n! methods to provide write access to the field Nspec_targ_n (" __HERE__ ")");
    t.method("Nspec_targ_n!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nspec_targ_n = val; });

    DEBUG_MSG("Adding Nspec_targ_n! methods to provide write access to the field Nspec_targ_n (" __HERE__ ")");
    t.method("Nspec_targ_n!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nspec_targ_n = val; });

    DEBUG_MSG("Adding Nspec_proj_p methods  to provide read access to the field Nspec_proj_p (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:179:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_proj_p
    t.method("Nspec_proj_p", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nspec_proj_p; });
    t.method("Nspec_proj_p", [](HepMC3::GenHeavyIon& a) -> int { return a.Nspec_proj_p; });
    t.method("Nspec_proj_p", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nspec_proj_p; });
    t.method("Nspec_proj_p", [](HepMC3::GenHeavyIon* a) -> int { return a->Nspec_proj_p; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:179:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_proj_p
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nspec_proj_p! methods to provide write access to the field Nspec_proj_p (" __HERE__ ")");
    t.method("Nspec_proj_p!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nspec_proj_p = val; });

    DEBUG_MSG("Adding Nspec_proj_p! methods to provide write access to the field Nspec_proj_p (" __HERE__ ")");
    t.method("Nspec_proj_p!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nspec_proj_p = val; });

    DEBUG_MSG("Adding Nspec_targ_p methods  to provide read access to the field Nspec_targ_p (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:186:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_targ_p
    t.method("Nspec_targ_p", [](const HepMC3::GenHeavyIon& a) -> int { return a.Nspec_targ_p; });
    t.method("Nspec_targ_p", [](HepMC3::GenHeavyIon& a) -> int { return a.Nspec_targ_p; });
    t.method("Nspec_targ_p", [](const HepMC3::GenHeavyIon* a) -> int { return a->Nspec_targ_p; });
    t.method("Nspec_targ_p", [](HepMC3::GenHeavyIon* a) -> int { return a->Nspec_targ_p; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:186:9
    // signature to use in the veto list: HepMC3::GenHeavyIon::Nspec_targ_p
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Nspec_targ_p! methods to provide write access to the field Nspec_targ_p (" __HERE__ ")");
    t.method("Nspec_targ_p!", [](HepMC3::GenHeavyIon& a, int val) -> int { return a.Nspec_targ_p = val; });

    DEBUG_MSG("Adding Nspec_targ_p! methods to provide write access to the field Nspec_targ_p (" __HERE__ ")");
    t.method("Nspec_targ_p!", [](HepMC3::GenHeavyIon* a, int val) -> int { return a->Nspec_targ_p = val; });

    DEBUG_MSG("Adding forceoldformat methods  to provide read access to the field forceoldformat (" __HERE__ ")");
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:237:10
    // signature to use in the veto list: HepMC3::GenHeavyIon::forceoldformat
    t.method("forceoldformat", [](const HepMC3::GenHeavyIon& a) -> bool { return a.forceoldformat; });
    t.method("forceoldformat", [](HepMC3::GenHeavyIon& a) -> bool { return a.forceoldformat; });
    t.method("forceoldformat", [](const HepMC3::GenHeavyIon* a) -> bool { return a->forceoldformat; });
    t.method("forceoldformat", [](HepMC3::GenHeavyIon* a) -> bool { return a->forceoldformat; });
    // defined in /home/hurtbadly/.julia/artifacts/7594d64d7c28f9689b484bf4d09af6dbb8b5123c/include/HepMC3/GenHeavyIon.h:237:10
    // signature to use in the veto list: HepMC3::GenHeavyIon::forceoldformat
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding forceoldformat! methods to provide write access to the field forceoldformat (" __HERE__ ")");
    t.method("forceoldformat!", [](HepMC3::GenHeavyIon& a, bool val) -> bool { return a.forceoldformat = val; });

    DEBUG_MSG("Adding forceoldformat! methods to provide write access to the field forceoldformat (" __HERE__ ")");
    t.method("forceoldformat!", [](HepMC3::GenHeavyIon* a, bool val) -> bool { return a->forceoldformat = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<HepMC3::GenHeavyIon>> type_;
};
std::shared_ptr<Wrapper> newJlHepMC3_GenHeavyIon(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlHepMC3_GenHeavyIon(module));
}
