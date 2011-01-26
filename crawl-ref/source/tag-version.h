#ifndef TAG_VERSION_H
#define TAG_VERSION_H

// Let CDO updaters know if the syntax changes.
#define TAG_MAJOR_VERSION  32

// Minor version will be reset to zero when major version changes.
enum tag_minor_version
{
    TAG_MINOR_INVALID         = -1,
    TAG_MINOR_RESET           = 0, // Minor tags were reset
    TAG_MINOR_DETECTED_MONSTER,    // Detected monsters keep more than a flag.
    TAG_MINOR_FIRING_POS,          // Store firing position for monsters.
    TAG_MINOR_FOE_MEMORY,          // Save monster's foe_memory.
    TAG_MINOR_SHOPS,               // Store shop_name and shop_type_name in shop_struct.

    NUM_TAG_MINORS,
    TAG_MINOR_VERSION = NUM_TAG_MINORS - 1
};

#endif
