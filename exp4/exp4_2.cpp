//
// Created by youyuanbo on 2019/5/9.
//

#include <iostream>

using namespace std;

class Student {
public:
    void set_value(int num, string name, char sex) {
        this->num = num;
        this->name = name;
        this->sex = sex;
    }

    void display() {

    }

    int getNum() {
        return this->num;
    }

    string getName() {
        return this->name;
    }

    char getSex() {
        return this->sex;
    }

private:
    int num;
    string name;
    char sex;
};


class Student1 : public Student {
public:
    void set_value_1(int age, string address) {
        this->age = age;
        this->address = address;
    }

    int getAge() {
        return this->age;
    }

    string getAddress() {
        return this->address;
    }

    void display_1() {
        cout << "num:\t" << getNum() << endl;
        cout << "name:\t" << getName() << endl;
        cout << "sex:\t" << getSex() << endl;
        cout << "age:\t" << getAge() << endl;
        cout << "address\t" << getAddress() << endl;
    }

private:
    int age;
    string address;
};

int main() {
    Student1 student1;
    student1.set_value(1602014121, "ะกำฮ",'M');
    student1.set_value_1(22, "ChenDu Technological University");
    student1.display_1();
    return 0;
}
