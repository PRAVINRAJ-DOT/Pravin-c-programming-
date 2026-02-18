#include <stdio.h>

int main() {
    int marks[6];
    int total = 0;
    float percentage;

    printf("Enter marks for 6 subjects:\n");

    for(int i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 600.0) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    if(percentage >= 95)
        printf("Grade A\n");
    else if(percentage >= 85)
        printf("Grade B\n");
    else if(percentage >= 75)
        printf("Grade C\n");
    else if(percentage >= 65)
        printf("Grade D\n");
    else if(percentage >= 45)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}
