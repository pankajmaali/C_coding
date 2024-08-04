#include <stdio.h>

int g = 5;
int main() {
    printf("%d", g);

    int i;
    int ans1, ans2, ans3, ans4, ans5, ans6;
    int point1 = 5;

    printf("Welcome to the game \n\n");
    printf("\nPress 1 to start the game \n");
    printf("\nPress 0 to end the game \n");
    scanf("%d", &i);

    switch (i) {
        case 1:
            printf("The game has started \n\n");
            break;
        case 0:
            printf("The game has ended \n");
            return 0;
        default:
            printf("Invalid \n");
            return 0;
    }

    printf("(A) Which one is the first web browser in 1990\n\n");
    printf("(1) Internet Explorer\n\n");
    printf("(2) Mosaic\n\n");
    printf("(3) Mozilla\n\n");
    printf("(4) Nexus\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans1);

    switch (ans1) {
        case 4:
            printf("Correct Answer \n\n");
            printf("You have scored %d point \n\n", point1);
            break;
        case 1:
        case 2:
        case 3:
            printf("Wrong answer \n");
            point1 = 0;
            printf("You have scored %d point \n\n", point1);
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    printf("The next question is: \n\n");
    printf("(B) Who is the father of C language?\n\n");
    printf("(1) Steve Jobs\n\n");
    printf("(2) James Gosling\n\n");
    printf("(3) Dennis Ritchie\n\n");
    printf("(4) Rasmus Lerdorf\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans2);

    switch (ans2) {
        case 3:
            printf("Correct Answer \n");
            if (ans1 == 4) {
                point1 = 10;
                printf("You have total scored %d point \n", point1);
            } else {
                point1 = 0;
                printf("You have total scored %d point \n", point1);
            }
            break;
        case 1:
        case 2:
        case 4:
            printf("Wrong answer \n");
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    printf("The next question is: \n\n");
    printf("(C) Which of the following is not a valid C variable name?\n\n");
    printf("(1) int number;\n\n");
    printf("(2) float rate;\n\n");
    printf("(3) int variable_count;\n\n");
    printf("(4) int $main;\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans3);

    switch (ans3) {
        case 4:
            printf("Correct Answer \n");
            if (ans2 == 3) {
                point1 = 15;
                printf("You have total scored %d point \n", point1);
            } else {
                point1 = 0;
                printf("You have total scored %d point \n", point1);
            }
            break;
        case 1:
        case 2:
        case 3:
            printf("Wrong answer \n");
            printf("You have total scored %d point \n", point1);
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    printf("The next question is: \n\n");
    printf("(D) Which is a valid C expression?\n\n");
    printf("(1) int my_num = 100,000;\n\n");
    printf("(2) int my_num = 100000;\n\n");
    printf("(3) int my num = 1000;\n\n");
    printf("(4) int $my_num = 10000;\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans4);

    switch (ans4) {
        case 2:
            printf("Correct Answer \n");
            if (ans3 == 4) {
                point1 = 20;
                printf("You have total scored %d point \n", point1);
            } else {
                point1 = 0;
                printf("You have total scored %d point \n", point1);
            }
            break;
        case 1:
        case 3:
        case 4:
            printf("Wrong answer \n");
            point1 = 20;
            printf("You have total scored %d point \n", point1);
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    printf("The next question is: \n\n");
    printf("(E) What is an example of iteration in C?\n\n");
    printf("(1) for\n\n");
    printf("(2) while\n\n");
    printf("(3) do-while\n\n");
    printf("(4) all of the mentioned\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans5);

    switch (ans5) {
        case 4:
            printf("Correct Answer \n");
            if (ans4 == 2) {
                point1 = 25;
                printf("You have total scored %d point \n", point1);
            } else {
                point1 = 0;
                printf("You have total scored %d point \n", point1);
            }
            break;
        case 1:
        case 2:
        case 3:
            printf("Wrong answer \n");
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    printf("The next question is: \n\n");
    printf("(F) What is #include <stdio.h>?\n\n");
    printf("(1) Preprocessor directive\n\n");
    printf("(2) Inclusion directive\n\n");
    printf("(3) File inclusion directive\n\n");
    printf("(4) None of the mentioned\n\n");
    printf("Enter your answer: ");
    scanf("%d", &ans6);

    switch (ans6) {
        case 1:
            printf("Correct Answer \n");
            if (ans5 == 4) {
                point1 = 30;
                printf("You have total scored %d point \n", point1);
            } else {
                point1 = 0;
                printf("You have total scored %d point \n", point1);
            }
            break;
        case 2:
        case 3:
        case 4:
            printf("Wrong answer \n");
            break;
        default:
            printf("Invalid answer \n");
            break;
    }

    return 0;
}
