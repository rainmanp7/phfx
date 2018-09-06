// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2017-2018 PHF-project developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "EventLock.h"
#include <System/Event.h>

namespace System {

EventLock::EventLock(Event& event) : event(event) {
  while (!event.get()) {
    event.wait();
  }

  event.clear();
}

EventLock::~EventLock() {
  event.set();
}

}
