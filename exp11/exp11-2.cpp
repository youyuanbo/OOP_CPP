//
// Created by xiaoyou on 2019/5/26.
//
#include <iostream>
using namespace std;

//学生处
namespace StudentOffice{
    class Student{
    private:
        //定义学生基本信息
        int studentNo;
        string name;
        int age;
        string address;
    public:
        //定义构造函数
        Student(int studentNo, string name, int age,  string address);
        //打印函数
        void display();
    };
}

//学生处 实现构造函数
StudentOffice::Student::Student(int studentNo, string name, int age, string address) {
    this->studentNo = studentNo;
    this->name = name;
    this->age = age;
    this->address = address;
}

//学生处 打印输出
void StudentOffice::Student::display() {
    cout << "StudentOffice::studentNo: " << StudentOffice::Student::studentNo << endl;
    cout << "StudentOffice::name: " << StudentOffice::Student::name << endl;
    cout << "StudentOffice::age: " << StudentOffice::Student::age << endl;
    cout << "StudentOffice::address: " << StudentOffice::Student::address << endl;
}

//教务处
namespace AcademicAffairsOffice{
    //定义学生类
    class Student{
        //定义学生基本信息
    private:
        int studentNo;
        string name;
        int age;
        string address;
    public:
        //定义构造函数
        Student(int studentNo, string name, int age,  string address);
        //打印输出
        void display();
    };
}

//教务处 构造函数
AcademicAffairsOffice::Student::Student(int studentNo, string name, int age, string address) {
    this->studentNo = studentNo;
    this->name = name;
    this->age = age;
    this->address = address;
}

//教务处 打印输出函数
void AcademicAffairsOffice::Student::display() {
    cout << "AcademicAffairsOffice::studentNo" << AcademicAffairsOffice::Student::studentNo << endl;
    cout << "AcademicAffairsOffice::name" << AcademicAffairsOffice::Student::name << endl;
    cout << "AcademicAffairsOffice::age" << AcademicAffairsOffice::Student::age << endl;
    cout << "AcademicAffairsOffice::address" << AcademicAffairsOffice::Student::address << endl;
}

//测试程序
int main(){
    StudentOffice::Student xiaoyou(1602014, "xiaoyou", 22,"CDTU");
    AcademicAffairsOffice::Student xiaowang(1606034,"xiaowang", 19, "TsingHua");

    xiaoyou.display();
    cout << endl;
    xiaowang.display();
    system("pause");
    return 0;
}