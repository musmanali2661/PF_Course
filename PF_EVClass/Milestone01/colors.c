#include <stdio.h>

// Define common ANSI color codes for readability
#define COLOR_RED      "\x1b[31m"
#define COLOR_GREEN    "\x1b[32m"
#define COLOR_YELLOW   "\x1b[33m"
#define COLOR_BLUE     "\x1b[34m"
#define COLOR_MAGENTA  "\x1b[35m"
#define COLOR_CYAN     "\x1b[36m"
#define COLOR_RESET    "\x1b[0m"
#define TEXT_BOLD      "\x1b[1m"
#define BG_BLUE        "\x1b[44m"
#define ATTRIB0        ""

void ShowText(char* text, char* color, char* style)
{
    printf(color);
    printf(style);
    printf(text);
    printf(COLOR_RESET);
}



int main() {


    
    ShowText("=======================================\n",COLOR_RED,ATTRIB0);
    ShowText("Welcome to Aziz Bhatti General Hospital\n",COLOR_GREEN,TEXT_BOLD);
    ShowText("=======================================\n",COLOR_RED,ATTRIB0);

    printf("1. Manage Patient\n");
    printf("2. Manage Doctor\n");
    printf("3. Manage Staff\n");
    printf("4. Manage Prescription\n");
    printf("5. \x1b[31mExit \x1b[0m\n");

   
    return 0;
}
