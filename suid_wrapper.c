#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s /path/to/target_program [args...]\n", argv[0]);
        return 1;
    }

    // Elevate privileges
    setuid(0);
    setgid(0);

    // Launch the target with the provided arguments
    execv(argv[1], &argv[1]);

    // If execv fails
    perror("execv failed");
    return 1;
}
