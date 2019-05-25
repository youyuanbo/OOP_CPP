//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <math.h>
using namespace std;

//������
class container{
protected:
    //�뾶
    double radius;

public:
    //���캯��
    container(double radius){
        this->radius = radius;
    }
    //������������Ĵ��麯��
    virtual double suface_area() = 0;
    //�����������Ĵ��麯��
    virtual double volume() = 0;
};

//�����������࣬�̳�container������
class cube : public container{

public:
    //������������Ĺ��캯��
    cube(double radius) : container(radius){

    }
    //����������ı����
    double suface_area(){
        return radius * radius * 6;
    }
    //��������������
    double volume(){
        return pow(radius, 3);
    }
};

//���������࣬�̳�container������
class sphere : public container{
public:
    //����������Ĺ��캯��
    sphere(double radius) : container(radius){

    }
    //��������ı����
    double suface_area(){
        return 4 * PI * pow(radius, 2);
    }
    //������������
    double volume(){
        return 4.0/3.0 * PI * pow(radius, 3);
    }

private:
    //����Բ����
    double PI = 3.14;
};

//����Բ�����࣬�̳�container������
class cylinder : public container{
public:
    //����Բ������Ĺ��캯��
    cylinder(double radius, double high) : container(radius){
        this->high = high;
    }
    //����Բ����ı����
    double suface_area(){
        return 2 * PI * pow(radius, 2) + 2 * PI * radius * high;
    }
    //����Բ��������
    double volume(){
        return PI * pow(radius, 2) * high;
    }

private:
    // �����
    double high;
    //����Բ����
    double PI = 3.14;
};


int main(){
    cube cube1(6.0);
    cout << "�߳�Ϊ6.0��������ı����Ϊ��" << cube1.suface_area()<< endl;
    cout << "�߳�Ϊ6.0������������Ϊ��" << cube1.volume() << endl;
    cout<<endl;

    sphere sphere1(5.0);
    cout << "�뾶Ϊ5.0����ı����Ϊ��" << sphere1.suface_area() <<endl;
    cout << "�뾶Ϊ5.0��������Ϊ��" << sphere1.volume() << endl;
    cout<<endl;

    cylinder cylinder1(5.0, 6.0);
    cout << "�뾶Ϊ5.0����Ϊ6.0��Բ����ı����Ϊ��" << cylinder1.suface_area() << endl;
    cout << "�뾶Ϊ5.0����Ϊ6.0��Բ��������Ϊ��" << cylinder1.volume() << endl;
    cout<<endl;

    system("pause");
    return 0;
}

