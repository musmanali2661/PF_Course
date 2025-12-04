#include <stdio.h>
#include <stdlib.h> // For exit()

// --------------------------------------------------------------------------------
// FOR FUTURE MILESTONES: Data Structures (Placeholder)
// These structures will be used in later milestones to hold system data.
// --------------------------------------------------------------------------------
struct Book {
    int bookID;
    char title[100];
    char author[100];
};

struct Member {
    int memberID;
    char name[100];
    char contact[50];
};

// --------------------------------------------------------------------------------
// LEVEL 2 SUB-MENU STUBS (Each student will implement one of these fully)
// --------------------------------------------------------------------------------

// Placeholder function for generic CRUD menu options
void entity_stub(const char *entity, int operation) {
    const char *op_name = "";
    switch (operation) {
        case 1: op_name = "Create New"; break;
        case 2: op_name = "Find"; break;
        case 3: op_name = "Update"; break;
        case 4: op_name = "Delete"; break;
        case 5: op_name = "Display All"; break;
    }
    printf("\n--- STUB: %s %s ---\n", op_name, entity);
    printf(">> Logic for this %s operation will be added in Milestone 2.\n", entity);
}

// Sub-Menu: Book Management (Example of one student's focus)
void book_management_menu() {
    int choice;
    do {
        printf("\n============================\n");
        printf("    1. Book Management\n");
        printf("============================\n");
        printf("1. Add New Book\n");
        printf("2. Find Book by ID/Title\n");
        printf("3. Update Book Details\n");
        printf("4. Delete Book Record\n");
        printf("5. Display All Books\n");
        printf("6. Back to Main Menu\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\n[ERROR] Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            choice = 0; 
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            entity_stub("Book", choice);
        } else if (choice == 6) {
            printf("\nReturning to Main Menu...\n");
        } else {
            printf("\n[ERROR] Invalid option. Please select a number from 1 to 6.\n");
        }
    } while (choice != 6);
}

// Sub-Menu: Member Management (Student 2's focus)
void member_management_menu() {
    int choice;
    do {
        printf("\n============================\n");
        printf("    2. Member Management\n");
        printf("============================\n");
        printf("1. Enroll New Member\n");
        printf("2. Find Member by ID/Name\n");
        printf("3. Update Member Details\n");
        printf("4. Remove Member\n");
        printf("5. Display All Members\n");
        printf("6. Back to Main Menu\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\n[ERROR] Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            choice = 0; 
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            entity_stub("Member", choice);
        } else if (choice == 6) {
            printf("\nReturning to Main Menu...\n");
        } else {
            printf("\n[ERROR] Invalid option. Please select a number from 1 to 6.\n");
        }
    } while (choice != 6);
}

// Sub-Menu: Loan Management (Student 3's focus)
void loan_management_menu() {
    int choice;
    do {
        printf("\n============================\n");
        printf("    3. Loan Management\n");
        printf("============================\n");
        printf("1. Issue Book (Create Loan)\n");
        printf("2. Find Loan by ID/Member\n");
        printf("3. Return Book (Update Loan Status)\n");
        printf("4. Remove Loan Record\n");
        printf("5. Display All Active Loans\n");
        printf("6. Back to Main Menu\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\n[ERROR] Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            choice = 0; 
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            entity_stub("Loan", choice);
        } else if (choice == 6) {
            printf("\nReturning to Main Menu...\n");
        } else {
            printf("\n[ERROR] Invalid option. Please select a number from 1 to 6.\n");
        }
    } while (choice != 6);
}

// Sub-Menu: Author Management (Student 4's focus)
void author_management_menu() {
    int choice;
    do {
        printf("\n============================\n");
        printf("    4. Author Management\n");
        printf("============================\n");
        printf("1. Add New Author\n");
        printf("2. Find Author by ID/Name\n");
        printf("3. Update Author Details\n");
        printf("4. Delete Author Record\n");
        printf("5. Display All Authors\n");
        printf("6. Back to Main Menu\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\n[ERROR] Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            choice = 0; 
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            entity_stub("Author", choice);
        } else if (choice == 6) {
            printf("\nReturning to Main Menu...\n");
        } else {
            printf("\n[ERROR] Invalid option. Please select a number from 1 to 6.\n");
        }
    } while (choice != 6);
}


// --------------------------------------------------------------------------------
// MAIN MENU FUNCTION (Level 1)
// --------------------------------------------------------------------------------

// Function to display and handle the Main Menu
void main_menu() {
    int choice;
    // Loop continuously until the user selects the Exit option (5)
    do {
        printf("\n===================================\n");
        printf("    Welcome to Country LMS\n");
        printf("===================================\n");
        printf("1. Book Management\n");
        printf("2. Member Management\n");
        printf("3. Loan Management\n");
        printf("4. Author Management\n");
        printf("5. Exit\n");
        printf("-----------------------------------\n");
        printf("Enter your choice: ");

        // Basic input validation
        if (scanf("%d", &choice) != 1) {
            printf("\n[ERROR] Invalid input. Please enter a number.\n");
            // Clear the input buffer to prevent infinite loop
            while(getchar() != '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                book_management_menu();
                break;
            case 2:
                member_management_menu();
                break;
            case 3:
                loan_management_menu();
                break;
            case 4:
                author_management_menu();
                break;
            case 5:
                printf("\nThank you for using Country LMS. Exiting system...\n");
                exit(0); // Exit the program
                break;
            default:
                printf("\n[ERROR] Invalid option. Please select a number from 1 to 5.\n");
                break;
        }
    } while (1); // The loop only exits via case 5 (exit(0))
}

// --------------------------------------------------------------------------------
// MAIN FUNCTION
// --------------------------------------------------------------------------------
int main() {
    // Start the application by calling the main menu
    main_menu();

    return 0;
}

