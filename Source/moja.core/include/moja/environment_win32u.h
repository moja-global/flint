#ifndef MOJA_Core_Environment_WIN32U_INCLUDED
#define MOJA_Core_Environment_WIN32U_INCLUDED

#include "moja/_core_exports.h"

namespace moja {

class EnvironmentImpl {
  public:
   static std::string startProcessFolderImpl();
};

}  // namespace moja

#endif  // MOJA_Core_Environment_WIN32U_INCLUDED
