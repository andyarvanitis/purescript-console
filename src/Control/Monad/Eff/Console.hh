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
#ifndef ControlMonadConsoleFFI_HH
#define ControlMonadConsoleFFI_HH

#include "Purescript/Purescript.hh"

namespace Control_Monad_Console {

  using namespace PureScript;

  inline auto log(string s) -> eff_fn<Prelude::Unit> {
    return [=]() {
      puts(s.c_str());
      return Prelude::unit;
    };
  }

}

#endif // ControlMonadConsoleFFI_HH
