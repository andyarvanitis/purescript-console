///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Console.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Console FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef ControlMonadEffConsoleFFI_HH
#define ControlMonadEffConsoleFFI_HH

#include "Purescript/Purescript.hh"
#include <iostream>

namespace Control_Monad_Eff_Console {

  using namespace PureScript;

  inline auto log(string s) -> eff_fn<Prelude::Unit> {
    return [=]() {
      std::cout << s << std::endl;
      return Prelude::unit;
    };
  }

  inline auto error(string s) -> eff_fn<Prelude::Unit> {
    return [=]() {
      std::cerr << s << std::endl;
      return Prelude::unit;
    };
  }

}

#endif // ControlMonadEffConsoleFFI_HH
