#include <stdio.h>

int main(void) {
    int score;

    printf("Enter your grades: ");
    scanf("%d", &score);

    if(score >= 90) {
        printf("You got an A\n");
    } else if (score >= 80) {
        printf("You got a B\n");
    } else if (score >= 70) {
        printf("You got a C\n");
    } else if (score >= 60) {
        printf("You got a D\n");
    } else {
        printf("You got an F\n");
    }
    return 0;
}