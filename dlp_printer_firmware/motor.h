#ifndef __MOTORS_H_INCLUDED__
#define __MOTORS_H_INCLUDED__

#include "util.h"
#include "configuration.h"

namespace motor {
  extern void configure();
  extern void set_num_steps_per_turn();
  extern void set_direction(int directions);
}
#endif  // __MOTORS_H_INCLUDED__