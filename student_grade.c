#include <stdio.h>

int main()
{
    int n, i;
    int roll[100];
    char name[100][50];
    float marks[100];

    printf("===== Student Grade Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks (0-100): ");
        scanf("%f", &marks[i]);
    }

    printf("\n========== Student Report ==========\n");

    printf("\nRoll\tName\tMarks\tGrade\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t", roll[i], name[i], marks[i]);

        if(marks[i] >= 90)
            printf("A+\n");
        else if(marks[i] >= 80)
            printf("A\n");
        else if(marks[i] >= 70)
            printf("B\n");
        else if(marks[i] >= 60)
            printf("C\n");
        else if(marks[i] >= 40)
            printf("D\n");
        else
            printf("F\n");
    }

    return 0;
}
