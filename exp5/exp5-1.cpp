//
// Created by youyuanbo on 2019/5/10.
//

#include <iostream>
using namespace std;

class Person{
public:
    Person(int num, string name){
        this->num = num;
        this->name = name;
    }

    void PersonDisplay(){
        cout << "Num: " << this->num << endl;
        cout << "Name: " << this->name << endl;
    }

private:
    int num;
    string name;
};


class Student : public Person{
public:
    Student(int num, string name, int class_num, double grade): Person(num, name){
        this->class_num = class_num;
        this->grade = grade;
    }

    void StudentDisplay(){
        cout << "class_num: " << this->class_num << endl;
        cout << "grade: " << this->grade << endl;
    }

private:
    int class_num;
    double grade;
};


class Teacher : public Person{
public:
    Teacher(int num, string name, string professionalRanks, string department):Person(num, name){
        this->professionalRanks = professionalRanks;
        this->department = department;
    }

    void TeacherDisplay(){
        cout << "professionalRanks: " << this->professionalRanks << endl;
        cout << "department: " << this->department << endl;
    }
private:
    string professionalRanks;
    string department;
};


int main(){
    Student student(1602014121, "小游", 1606034, 98.8);
    student.PersonDisplay();
    student.StudentDisplay();

    cout << endl;

    Teacher teacher(10101010, "大游", "教授", "软工教研室");
    teacher.PersonDisplay();
    teacher.TeacherDisplay();
    return 0;
}
