#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

int main() {
    // TODO: change the string instead of sample.
    const char *paris_rules[] = {
        "Paris Rule 1: No eating in the library",
        "Paris Rule 2: Mandatory attendance for morning classes",
        "Paris Rule 3: Silence must be maintained in study areas",
        "Paris Rule 4: No smoking on campus grounds",
        "Paris Rule 5: Mobile phones must be on silent mode",
        "Paris Rule 6: Proper attire is required in laboratories",
        "Paris Rule 7: ID cards must be worn at all times",
        "Paris Rule 8: No unauthorized access to restricted areas",
        "Paris Rule 9: Clean up after using common areas",
        "Paris Rule 10: Bicycles should be parked in designated areas"
    };

    const char *seoul_rules[] = {
        "Seoul Rule 1: No food or drinks in classrooms",
        "Seoul Rule 2: Attendance is required for all lectures",
        "Seoul Rule 3: Keep noise levels down in the dormitories",
        "Seoul Rule 4: No alcohol on campus premises",
        "Seoul Rule 5: Respect quiet hours after 10 PM",
        "Seoul Rule 6: Wear student uniform during official events",
        "Seoul Rule 7: Display student ID when entering buildings",
        "Seoul Rule 8: Unauthorized solicitation is prohibited",
        "Seoul Rule 9: Dispose of waste in proper bins",
        "Seoul Rule 10: Vehicles must be registered with campus security"
    };

    int campus_choice;
    const char **selected_rules;
    int num_rules;

    printf(YELLOW "*******************************\n" RESET);
    printf(YELLOW "*     " MAGENTA "Welcome to Campus" YELLOW "      *\n" RESET);
    printf(YELLOW "*******************************\n" RESET);

    printf(GREEN "Select a campus:\n" RESET);
    printf("1. Paris Campus\n");
    printf("2. Seoul Campus\n");
    printf("Enter your choice (1 or 2): ");
	
    scanf("%d", &campus_choice);
    srand(time(NULL));
    if (campus_choice == 1) {
        selected_rules = paris_rules;
        num_rules = sizeof(paris_rules) / sizeof(paris_rules[0]);
    } else if (campus_choice == 2) {
        selected_rules = seoul_rules;
        num_rules = sizeof(seoul_rules) / sizeof(seoul_rules[0]);
    } else {
        printf(RED "Oops! Invalid choice. Please run the program again and select 1 or 2.\n" RESET);
        return 1;
    }

    int random_index = rand() % num_rules;
    printf(YELLOW "\n*******************************\n" RESET);
    printf(MAGENTA "★ " CYAN "Your Random Campus Rule" MAGENTA " ★\n" RESET);
    printf(BLUE "%s\n" RESET, selected_rules[random_index]);
    printf(YELLOW "*******************************\n\n" RESET);
    printf(GREEN "Have a great day! (^_^)/\n" RESET);
    return 0;
}
