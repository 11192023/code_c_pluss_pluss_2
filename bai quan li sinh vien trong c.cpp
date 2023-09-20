#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_COURSE_LEN 50

typedef struct {
    int studentID;
    char name[MAX_NAME_LEN];
    char course[MAX_COURSE_LEN];
    double tuitionFee;
    double paidFee;
    char enrollDate[20];
} Student;

void inputStudent(Student *student) {
    printf("Nhap thong tin sinh vien:\n");
    printf("Student ID: ");
    scanf("%d", &student->studentID);
    printf("Name: ");
    fflush(stdin);
    fgets(student->name, MAX_NAME_LEN, stdin);
    printf("Course: ");
    fflush(stdin);
    fgets(student->course, MAX_COURSE_LEN, stdin);
    printf("Tuition fee: ");
    scanf("%lf", &student->tuitionFee);
    printf("Paid fee: ");
    scanf("%lf", &student->paidFee);
    printf("Enrollment date: ");
    fflush(stdin);
    fgets(student->enrollDate, 20, stdin);
}

void writeStudentToFile(Student *student, FILE *file) {
    fwrite(student, sizeof(Student), 1, file);
}

void readStudentFromFile(Student *student, FILE *file) {
    fread(student, sizeof(Student), 1, file);
}

void printStudent(Student student) {
    printf("Student ID: %d\n", student.studentID);
    printf("Name: %s", student.name);
    printf("Course: %s", student.course);
    printf("Tuition fee: %.2lf\n", student.tuitionFee);
    printf("Paid fee: %.2lf\n", student.paidFee);
    printf("Enrollment date: %s", student.enrollDate);
}

int main() {
    FILE *file;
    Student student;
    int option;
    
    file = fopen("STUDENT.DAT", "ab+");
    if (file == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }
    
    while (1) {
        printf("1. Them sinh vien\n");
        printf("2. In danh sach sinh vien\n");
        printf("3. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                inputStudent(&student);
                writeStudentToFile(&student, file);
                break;
            case 2:
                rewind(file);
                printf("Danh sach sinh vien:\n");
                while (!feof(file)) {
                    readStudentFromFile(&student, file);
                    if (!feof(file)) {
                        printStudent(student);
                        printf("--------------------\n");
                    }
                }
                break;
            case 3:
                fclose(file);
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
}

