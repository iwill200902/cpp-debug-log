#include "debug_log.hpp"

int main() {
    debug_log();  // Debug Log No. 1
    debug_log();  // Debug Log No. 2

    for (int i = 0; i < 2; ++i) {
        debug_log();  // No. 3, No. 4
    }

    return 0;
}
