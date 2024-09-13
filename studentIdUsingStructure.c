#include <stdio.h>

struct id {
    int en_no;
    char name[50];
    char phone_no[15];
    char email[50];
    char address[100];
};

int main() {
    struct id student;

    student.en_no = 211460;
    sprintf(student.name, "Dhruv Lad");
    sprintf(student.phone_no, "+91-8320452017");
    sprintf(student.email, "dhruvlad4444@gmail.com");
    sprintf(student.address, "63, Shantinagar, kim, Surat, Gujarat");

    printf("Student ID Card\n");
    printf("-----------------\n");
    printf("Student Name: %s \n", student.name);
    printf("Enrollment No.: %d \n", student.en_no);
    printf("Phone No.: %s \n", student.phone_no);
    printf("Email ID: %s \n", student.email);
    printf("Address: %s \n", student.address);

    return 0;
}
