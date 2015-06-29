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

namespace Control_Monad_Eff_Console {

  using namespace PureScript;

  inline auto log(string s) -> eff_fn<Prelude::Unit> {
    return [=]() {
      puts(s.c_str());
      return Prelude::unit;
    };
  }

}

#endif // ControlMonadEffConsoleFFI_HH
