//Format the information of 5 students(name,marks,cgpa,course) in a table like structure in a file.
#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int marks;
    float cgpa;
    char course[25];
};

int main(){
    struct student s1;
    strcpy(s1.name,"Adya");
    s1.marks=356;
    s1.cgpa=7.9;
    strcpy(s1.course,"Java");

    struct student s2;
    strcpy(s2.name,"Divya");
    s2.marks=410;
    s2.cgpa=8.2;
    strcpy(s2.course,"Python");

    struct student s3;
    strcpy(s3.name,"Juhi");
    s3.marks=356;
    s3.cgpa=7.9;
    strcpy(s3.course,"Html");

    struct student s4;
    strcpy(s4.name,"Aman");
    s4.marks=324;
    s4.cgpa=6.4;
    strcpy(s4.course,"Css");

    struct student s5;
    strcpy(s5.name,"Rohit");
    s5.marks=255;
    s5.cgpa=5.5;
    strcpy(s5.course,"C++");

    printf("\n\nName is %s",s1.name);
    printf("\nMarks is %d",s1.marks);
    printf("\ncgpa is %f",s1.cgpa);
    printf("\nCourse is %s",s1.course);

    printf("\n\nName is %s",s2.name);
    printf("\nMarks is %d",s2.marks);
    printf("\ncgpa is %f",s2.cgpa);
    printf("\nCourse is %s",s2.course);

    printf("\n\nName is %s",s3.name);
    printf("\nMarks is %d",s3.marks);
    printf("\ncgpa is %f",s3.cgpa);
    printf("\nCourse is %s",s3.course);

    printf("\n\nName is %s",s4.name);
    printf("\nMarks is %d",s4.marks);
    printf("\ncgpa is %f",s4.cgpa);
    printf("\nCourse is %s",s4.course);

    printf("\n\nName is %s",s5.name);
    printf("\nMarks is %d",s5.marks);
    printf("\ncgpa is %f",s5.cgpa);
    printf("\nCourse is %s",s5.course);

    return 0;
}