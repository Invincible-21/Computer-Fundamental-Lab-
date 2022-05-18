#include <stdio.h>

int main()
{
    int n;
    printf("Enter number(0 to 100): ");
    scanf("%d", &n);

    if (n >= 80 && n <= 100)
    {
        printf("Grade: A+\nGrade Point: 4.00\n");
    }
    else if (n >= 75 && n < 80)
    {
        printf("Grade: A\nGrade Point: 3.75\n");
    }
    else if (n >= 70 && n <= 74)
    {
        printf("Grade: A-\nGrade Point: 3.50\n");
    }
    else if (n >= 65 && n <= 69)
    {
        printf("Grade: B+\nGrade Point: 3.25\n");
    }
    else if (n >= 60 && n <= 64)
    {
        printf("Grade: B\nGrade Point: 3.00\n");
    }
    else if (n >= 55 && n <= 59)
    {
        printf("Grade: B-\nGrade Point: 2.75\n");
    }
    else if (n >= 50 && n <= 54)
    {
        printf("Grade: C+\nGrade Point: 2.50\n");
    }
    else if (n >= 45 && n <= 49)
    {
        printf("Grade: C\nGrade Point: 2.25\n");
    }
    else if (n >= 0 && n < 45)
    {
        printf("Not pass\n");
    }
    else
        printf("Invalid number. Please Enter a valid number\n");

    return 0;
}