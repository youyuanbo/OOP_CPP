//
// Created by youyuanbo on 2019/3/22.
//

#ifndef OOP_CPP_STUDENT_H
#define OOP_CPP_STUDENT_H


class student {
private:
    int num;
    char name[20];
    char sex;
public:
    student set_val();
    void display(student student1);
};


#endif //OOP_CPP_STUDENT_H
