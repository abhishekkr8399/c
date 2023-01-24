/* Write a C program to enter the information like name, register number,
marks in 6 subjects of N libbooksents into an array of structures, find the
average & display grade based on average for each libbooksent.
Average Grade
80 -100 Distinction
60-79 First Class
40 -59 Second Class
<40 Fail */
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int id, marks[6];
    float avg;
};
int main()
{
    struct student s[100];
    int i, j, n, sum = 0;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    printf("PLEASE ENTER %d STUDENT DETAILS\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of student%d\n", i + 1);
        printf("Enter the name\n");
        scanf("%s", s[i].name);
        printf("Enter the ID\n");
        scanf("%d", &s[i].id);
        printf("enter the marks in 6 subjects\n");
        for (j = 0; j < 6; j++)
        {
            printf("subject %d\n", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
        sum = 0;
        for (j = 0; j < 6; j++)
            sum = sum + s[i].marks[j];
        s[i].avg = sum / 6;
        printf("The average marks of student %d is %f\n", i + 1, s[i].avg);
        if (s[i].avg >= 80 && s[i].avg <= 100)
            printf("grade is distinction\n");
        else if (s[i].avg >= 60 && s[i].avg <= 79)
            printf("The grade is first class\n");
        else if (s[i].avg >= 40 && s[i].avg <= 59)
            printf("The grade is second class\n");
        else
            printf("FAIL\n");
    }
    return 0;
}