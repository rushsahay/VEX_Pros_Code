#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/abstract_motor.hpp"
#include "pros/motors.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor intake(20);
inline pros::Motor conveyor(8);
inline pros::MotorGroup contake({20,8},pros::v5::MotorGears::blue,pros::v5::MotorUnits::rotations);
inline int16_t mogomechPort = 'D';
inline pros::adi::DigitalOut mogomech('D');
inline pros::adi::DigitalOut arm('F');
inline int16_t armPort = 'F';