//
// Created by youyuanbo on 2019/3/22.
//

#include "student.h"
#include <iostream>
using namespace std;

student student::set_val() {
    student student1;
    cout<<"�������ţ�";
    cin>>student1.num;
    cout<<"������������";
    cin>>student1.name;
    cout<<"�������Ա�(�У�M��Ů��F)��";
    cin>>student1.sex;
    return student1;
}

void student::display(student student1) {
    cout<<"num: "<<student1.num<<endl;
    cout<<"name: "<<student1.name<<endl;
    cout<<"sex: "<<student1.sex<<endl;
}
