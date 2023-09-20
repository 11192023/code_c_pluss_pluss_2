#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int student_id;
    char student_name[50];
    char course_name[50];
    double course_fee;
    double fees_paid;
    char date_of_admission[10];
};

void writeToFile (struct student* s)
{
    FILE *fptr = fopen("STUDENT.DAT","a+");
     fprintf(fptr, "%d\n%s\n%s\n%lf\n%lf\n%s\n", s->student_id, s->student_name, s->course_name, s->course_fee, s->fees_paid, s->date_of_admission);
    fclose(fptr);



}

void readFile(struct student* s)
{
    FILE *fptr = fopen("STUDENT.DAT","r");
    while (!feof(fptr))
    {
        fscanf(fptr, " %d %s %s %lf %lf %s\n", &s->student_id, &s->student_name, &s->course_name, &s->course_fee, &s->fees_paid, s->date_of_admission);
        printf("%d %s %s %lf %lf %s\n", s->student_id, s->student_name, s->course_name, s->course_fee, s->fees_paid, s->date_of_admission);
        if (feof(fptr))
        {
            break;
        }
    }
    fclose(fptr);
}
void idRead(struct student *s,int id)
{
 FILE *fptr = fopen("STUDENT.DAT","r");
    while (!feof(fptr))
    {
        fscanf(fptr, " %d %s %s %lf %lf %s\n", &s->student_id, &s->student_name, &s->course_name, &s->course_fee, &s->fees_paid, s->date_of_admission);
        if(s->student_id==id)
           {printf("%d %s %s %lf %lf %s\n", s->student_id, s->student_name, s->course_name, s->course_fee, s->fees_paid, s->date_of_admission);
           break;}
    }
    fclose(fptr);
}

void nameRead(struct student *s,char *name[50])
{
 FILE *fptr = fopen("STUDENT.DAT","r");
    while (!feof(fptr))
    {
        fscanf(fptr, " %d %s %s %lf %lf %s\n", &s->student_id, &s->student_name, &s->course_name, &s->course_fee, &s->fees_paid, s->date_of_admission);
        if(strcmp(s->student_name, name) == 0)
           {printf("%d %s %s %lf %lf %s\n", s->student_id, s->student_name, s->course_name, s->course_fee, s->fees_paid, s->date_of_admission);
           break;}
    }
    fclose(fptr);
}

void main()
{

    int ctr,student_id;
    char student_name[50];
   printf("Enter the number of students to store: ");
   scanf("%d", &ctr);
   struct student students[ctr];
   for (int i=0;i<ctr;i++)
   {
        struct student students[i];
        printf("Enter information for student %d:\n", i+1);
        printf("Student ID: ");
        scanf("%d", &students[i].student_id);
        printf("Student Name: ");
        scanf("%s", students[i].student_name);
        printf("Course Name: ");
        scanf("%s", students[i].course_name);
        printf("Course Fee: ");
        scanf("%lf", &students[i].course_fee);
        printf("Fees Paid: ");
        scanf("%lf", &students[i].fees_paid);
        printf("Date of Admission (YYYY-MM-DD): ");
        scanf("%s", students[i].date_of_admission);
        writeToFile(&students[i]);





   }

    readFile(students);
    printf("Enter the id of the student you want to find: ");
    scanf("%d", &student_id );
    idRead(students, student_id);
    printf("Enter the name of the student you want to find: ");
    fflush(stdin);
    fgets(student_name, 50, stdin);
    strtok(student_name, "\n");
    nameRead(students, student_name);

    remove("STUDENT.DAT");

  }
