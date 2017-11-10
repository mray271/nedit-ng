
#ifndef VIRT_KEY_OVERRIDE_H_
#define VIRT_KEY_OVERRIDE_H_

#include <QMetaType>

enum class VirtKeyOverride {
    VIRT_KEY_OVERRIDE_NEVER,
    VIRT_KEY_OVERRIDE_AUTO,
    VIRT_KEY_OVERRIDE_ALWAYS
};

Q_DECLARE_METATYPE(VirtKeyOverride)

#endif
