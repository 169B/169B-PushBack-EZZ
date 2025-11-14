#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake({10, -11});
inline ez::Piston matchloader('A');
inline ez::Piston hood('B');
inline ez::Piston gate('C');