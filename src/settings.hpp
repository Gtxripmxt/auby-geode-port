#pragma once

#include <auby/settings.hpp>

namespace settings {
namespace level {
static auby::SettingsValue<bool> verifyHack("level/verify_hack", false);
}
} // namespace settings
