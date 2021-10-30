#pragma once

#include "JoystickButton.hpp"
#include <frc/Joystick.h>
#include <rev\CANSparkMax.h>
#include "ngr.hpp"

namespace BUTTON
{
    inline frc::Joystick JOY1{0}, JOY2{1};

    namespace CLIMBER
    {
        inline JoystickButton RAISE{BUTTON::JOY2, 11};
        inline JoystickButton LOWER{BUTTON::JOY1, 6};
    }

    // namespace DRIVETRAIN
    // {
    //     // inline JoystickButton ZERO { BUTTON::lStick, 10 };
    //     // inline JoystickButton REVERSE { BUTTON::lStick, 11 };
    // } // namespace DRIVETRAIN
} // namespace BUTTON
namespace CLIMBER
{
    constexpr int PORT_1 = 17;

    constexpr auto IDLE_MODE = rev::CANSparkMax::IdleMode::kBrake;

    constexpr double P = 0.1771;
    constexpr double I = 0.0;
    constexpr double D = 0.0;

    constexpr double MAX_OUTPUT = 1;

    typedef enum
    {
        DOWN = -153,
        UP = -1111,
        ZERO = 0
    } POSITION;

} // namespace CLIMBER
