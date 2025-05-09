#include "auby2/src/settings.hpp"
#include "auby2/include/auby/auby.hpp"

namespace {
bool $(EditLevelLayer::init)(EditLevelLayer* self, GJGameLevel* level) {
    spdlog::info("{}", settings::level::verifyHack());
    if (settings::level::verifyHack())
        level->m_isVerified[0] = 1;

    return $orig(self, level);
}
} // namespace
