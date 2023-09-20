#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    char course[20];
    float course_fee;
    char fees_paid;
    char date_of_admission[20];
};
void add_student()
{
    struct student s;
    FILE *fp;
    fp = fopen("STUDENT.DAT", "ab");
    printf("Enter student id: ");
    scanf("%d", &s.id);
    getchar();
    printf("Enter student name: ");
    gets(s.name);
    printf("Enter course: ");
    gets(s.course);
    printf("Enter course fee: ");
    scanf("%f", &s.course_fee);
    getchar();
    printf("Enter fees paid: ");
    scanf("%c", &s.fees_paid);
    getchar();
    printf("Enter date of admission: ");
    gets(s.date_of_admission);
    fwrite(&s, sizeof(struct student), 1, fp);
    fclose(fp);
}
void display_all_student()
{
    struct student s;
    FILE *fp;
    fp = fopen("STUDENT.DAT", "rb");
    printf("ID\tName\tCourse\tCourse_fee\tFees_Paid\tDate_of_admission\n");
    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        printf("%d\t%s\t%s\t%.2f\t%c\t%s\n", s.id, s.name, s.course, s.course_fee, s.fees_paid, s.date_of_admission);
    }
    fclose(fp);
}
void search_by_id(int id)
{
    struct student s;
    FILE *fp;
    fp = fopen("STUDENT.DAT", "rb");
    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        if (s.id == id)
        {
            printf("ID\tName\tCourse\tCourse_fee\tFees_Paid\tDate_of_admission\n");
            printf("%d\t%s\t%s\t%.2f\t%c\t%s", s.id, s.name, s.course, s.course_fee, s.fees_paid, s.date_of_admission);
            fclose(fp);
            return;
        }
    }
    printf("Student not found");
    fclose(fp);
}
void search_by_name(char *name)
{
    struct student s;
    FILE *fp;
    fp = fopen("STUDENT.DAT", "rb");
    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {
        if (strcmp(s.name, name) == 0)
        {
            printf("ID\tName\tCourse\tCourse_fee\tFees_Paid\tDate_of_admission\n");
            printf("%d\t%s\t%s\t%.2f\t%c\t%s", s.id, s.name, s.course, s.course_fee, s.fees_paid, s.date_of_admission);
            fclose(fp);
            return;
        }
    }
    printf("Studen not found");
    fclose(fp);
}
int main()
{
    printf("Enter the number of student: ");
    int n;
    scanf("%d", &n);
    while (n--)
    {
        add_student();
        system("cls");
    }
    while (1)
    {
        printf("Display mode:\n");
        printf("1.Display all student.\n");
        printf("2.Display student by ID.\n");
        printf("3.Displat student by Name.\n");
        printf("4.Stop.\n");
        printf("Enter display mode: ");
        int m;
        scanf("%d", &m);
        if (m == 1)
        {
            display_all_student();
        }
        else if (m == 2)
        {
            printf("\nEnter ID: ");
            int ID;
            scanf("%d", &ID);
            search_by_id(ID);
        }
        else if (m == 3)
        {
            printf("\nEnter name: ");
            getchar();
            char name[20];
            fgets(name, sizeof(name), stdin);
            search_by_name(name);
        }
        else if (m == 4)
        {
            remove("STUDENT.DAT");
            return 0;
        }
        else
        {
            printf("Incorrect number entered. Please re-enter");
        }
        getchar();
        printf("\nPress the Enter key to clear the screen\n");
        char c;
        scanf("%c", &c);
        if (c == '\n')
        {
            system("cls");
        }
    }
}

