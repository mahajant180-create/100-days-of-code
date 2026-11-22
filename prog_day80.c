Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int roll, marks;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Taking student details and writing to file
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);

    // Opening file again in read mode
    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Reading and displaying student records
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(file);

    return 0;
}