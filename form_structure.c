// Make a system that can store information of all students, teachers & staff of your college in the form of structures.
#include<stdio.h>
#include<string.h>

// ------------For Student------------
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

//------------For Teachers-----------------
struct teacher
{
    char name[100];
    int phno;
    char add[100];
    int age;
};

//------------For Staff-----------------
struct staff
{
    char name[100];
    int phno;
    char add[100];
    int age;
};


int main()
{
    struct student s1;
    strcpy(s1.name,"Adya");
    s1.cgpa=7.9;
    s1.roll=345;

    struct teacher t1;
    strcpy(t1.name,"Divya");
    t1.phno=1234567890;
    t1.age=36;
    strcpy(t1.add,"Bihar");

    struct staff st1;
    strcpy(st1.name,"Soni");
    st1.phno=1234567890;
    st1.age=31;
    strcpy(st1.add,"Bihar");

    printf("Name is %s",s1.name);
    printf("\nRoll is %d",s1.roll);
    printf("\ncgpa is %f",s1.cgpa);

    printf("\n\nName is %s",t1.name);
    printf("\nPhno is %d",t1.phno);
    printf("\nAddress is %s",t1.add);
    printf("\nAge is %d",t1.age);

    printf("\n\nName is %s",st1.name);
    printf("\nPhno is %d",st1.phno);
    printf("\nAddress is %s",st1.add);
    printf("\nAge is %d",st1.age);

    return 0;
}