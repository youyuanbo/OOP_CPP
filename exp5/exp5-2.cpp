//
// Created by youyuanbo on 2019/5/10.
//

#include <iostream>
using namespace std;

class Teacher{
public:
    Teacher(string name, int age, char sex, string address, string tel, string title);

    void display();

private:
    string name;
    int age;
    char sex;
    string address;
    string tel;
    string title;


};

Teacher::Teacher(string name, int age, char sex, string address, string tel, string title) {
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->tel = tel;
    this->address = address;
    this->title = title;    //职称
}

void Teacher::display() {
    cout << "name: " << this->name << endl;
    cout << "age: " << this->age << endl;
    cout << "sex: " << this->sex << endl;
    cout << "title: " << this->title<< endl;
    cout << "address: " << this->address<< endl;
    cout << "tel: " << this->tel<< endl;
}

class Cadre{
public:
    Cadre(string name, int age, char sex, string address, string tel, string post);
    Cadre(string post);

    string getPost();
private:
    string name;
    int age;
    char sex;
    string address;
    string tel;
    string post;    //职务
};

Cadre::Cadre(string name, int age, char sex, string address, string tel, string post) {
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->tel = tel;
    this->address = address;
    this->post = post;
}


Cadre::Cadre(string post) {
    this->post = post;
}

string Cadre::getPost() {
    return this->post;
}

class Teacher_Cadre : public Teacher, public Cadre{
public:

    Teacher_Cadre(string name, int age, char sex, string address, string tel, string title, string post, double wages):Teacher(name,age,sex,address,tel,title),Cadre(post){
        this->wages = wages;
    }

    void show();

private:
    double wages;
};

void Teacher_Cadre::show() {
    display();
    cout << "post: " << getPost() << endl;
    cout << "wages: " << this->wages << endl;
}


int main(){
    Teacher_Cadre teacher_cadre("小游", 22, 'M', "ChenDu Techenological University", "10101011", "Null", "Student", 0.0);
    teacher_cadre.show();
    return 0;
}
