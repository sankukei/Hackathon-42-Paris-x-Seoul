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
	"1) Don't touch the cat called moulinette",
	"2) Don't smoke after 9PM in front of Paul building",
	"3) Don't kick the vending machine",
	"4) Don't put your bottle on your desk",
	"5) Don't eat food inside clusters or drink anything not water",
	"6) Don't disrespect staff members",
	"7) Don't sleep inside clusters",
	"8) Always have your badge on yourself",
        "9): Clean up after using common areas",
        "10): Bicycles should be parked in designated areas"
    };

    const char *seoul_rules[] = {
	"1) Entering the cluster while under the influence of alcohol.",
	"2) Playing video games in the cluster.",
	"3) Wearing attire that could be mistaken for a 42 Seoul staff uniform (e.g., clothing with “42 STAFF” or “42 BOCAL” labels) or pretending to be a staff member during La Piscine.",
	"4) Leaving a visitor accompanied by a trainee alone within the 42 Seoul facility.",
	"5) Using a computer’s speakers within the cluster.",
        "Seoul Rule 7: Display student ID when entering buildings",
	"6) Intentionally matching assessments with specific peers.",
	"7) Attending the school while expelled or during an account suspension period.",
	"8) Misusing someone else’s access badge.",
	"9) Failing to conduct continuous in-person peer assessments from start to finish (with exceptions for approved online assessments).",
	"10) Unplugging the cluster PC power cable or accessory cables without permission."
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
