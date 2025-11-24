#include <stdio.h>

// Define common ANSI color codes for readability
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_CYAN     "\x1b[36m"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define ANSI_BOLD           "\x1b[1m"
#define ANSI_BG_BLUE        "\x1b[44m"


int main() {
    // 1. Simple Red text
    printf(ANSI_COLOR_RED "This text is red." ANSI_COLOR_RESET "\n");

    // 2. Bold Green text
    printf(ANSI_BOLD ANSI_COLOR_GREEN "This text is bold and green." ANSI_COLOR_RESET "\n");

    // 3. Yellow text on a Blue background
    printf(ANSI_BG_BLUE ANSI_COLOR_YELLOW "Yellow text on blue background." ANSI_COLOR_RESET "\n");

    // 4. Resetting is crucial to not color the rest of the terminal output
    printf("This text is back to default color.\n");

    return 0;
}