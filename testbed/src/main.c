#include <core/logger.h>
#include <core/asserts.h>

// TODO: test
#include <platform/platform.h>

int main(void) {
    KFATAL("A test message: %f", 3.24f);
    KERROR("A test message: %f", 3.24f);
    KWARN("A test message: %f", 3.24f);
    KINFO("A test message: %f", 3.24f);
    KDEBUG("A test message: %f", 3.24f);
    KTRACE("A test message: %f", 3.24f);

    platform_state state;
    if (platform_startup(&state, "KohiEngineTestbed", 100, 100, 1280, 720)) {
        while(TRUE) {
            platform_pump_messages(&state);
        }
    }
    platform_shutdown(&state);
    
    return 0;
}