#include <stdio.h>

// Define common ANSI color codes for readability
#define PI             3.14
#define COLOR_RED      "\x1b[31m"
#define COLOR_GREEN    "\x1b[32m"
#define COLOR_YELLOW   "\x1b[33m"
#define COLOR_BLUE     "\x1b[34m"
#define COLOR_MAGENTA  "\x1b[35m"
#define COLOR_CYAN     "\x1b[36m"
#define COLOR_RESET    "\x1b[0m"
#define BOLD           "\x1b[1m"
#define BG_BLUE        "\x1b[44m"

void DisplayText(char* text, char* color)
{

    printf(color);
    printf(text);
    printf(COLOR_RESET);

}

void DisplayTitle()
{
    DisplayText("==================\n", COLOR_GREEN);
    printf("  Aamir Hospital  \n");
    DisplayText("==================\n", COLOR_GREEN);

}

int main() {
    
    DisplayTitle();

    //printf(COLOR_CYAN);

    int choice = 0;
    while(1)
    {
        printf("1. Patient management.\n");
        printf("2. Doctor management.\n");
        printf("3. Staff management.\n");
        printf("4. Appointment management.\n");
        printf("5. Exit.\n");
        printf("\x1b[32mEnter your choice:\x1b[0m\n");
        scanf("%d", &choice);

        if(choice == 5)
            break;

        

    }
    return 0;
}
