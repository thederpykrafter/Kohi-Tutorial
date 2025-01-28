#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("A test message: %f", 3.24f);
    KERROR("A test message: %f", 3.24f);
    KWARN("A test message: %f", 3.24f);
    KINFO("A test message: %f", 3.24f);
    KDEBUG("A test message: %f", 3.24f);
    KTRACE("A test message: %f", 3.24f);

    KASSERT(1 == 0);
    return 0;
}