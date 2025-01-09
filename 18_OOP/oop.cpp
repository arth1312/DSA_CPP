#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    public:
        int grid;
        char name[50];
        int age;
        char course[50];
        float persentage;
};
int main()
{
    Student student1;

    student1.grid = 258;
    strcpy(student1.name, "Harsh");
    student1.age = 19;
    strcpy(student1.course, "DSA");
    student1.persentage = 90.88;

    cout << "Grid: " << student1.grid << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Course: " << student1.course << endl;
    cout << "Persentage: " << student1.persentage << endl;

    return 0;
} 