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
#ifndef ConsoleFFI_HH
#define ConsoleFFI_HH

#include "Purescript/Purescript.hh"

namespace Console {

  using namespace PureScript;

  inline auto log(string s) -> eff_fn<Prelude::Unit> {
    return [=]() {
      puts(s.c_str());
      return Prelude::unit;
    };
  }

}

#endif // ConsoleFFI_HH
