//
// Created by youyuanbo on 2019/5/21.
//

#include <iostream>
using namespace std;

class Complex{
public:
    //定义构造函数，以及参数默认值
    Complex(double real = 0, double imag = 0);
    //加法运算符重载，参数为两个复数对象
    friend Complex operator+(Complex &complex1, Complex &complex2);
    //加法运算符重载，参数为一个整数与一个复数类对象
    friend Complex operator+(int i, Complex &complex2);
    //加法运算符重载，参数为一个整数与一个复数类对象
    friend Complex operator+(Complex &complex1, int i);
    //获取实部
    double getreal();
    //获取虚部
    double getImag();

private:
    double real;
    double imag;
};

//构造函数，初始化参数
Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

//加法运算符重载，参数为两个复数对象，函数的具体实现
Complex operator+(Complex &complex1, Complex &complex2){
    Complex temp;
    temp.real = complex1.real + complex2.real;
    temp.imag = complex1.imag + complex2.imag;
    return temp;
}

//加法运算符重载，参数为一个整数与一个复数类对象，函数的具体实现
Complex operator+(int i, Complex &complex2){
    Complex temp;
    temp.real = i + complex2.real;
    temp.imag = complex2.imag;
    return temp;
}

//加法运算符重载，参数为一个整数与一个复数类对象，函数的具体实现
Complex operator+(Complex &complex1, int i){
    Complex temp;
    temp.real = complex1.real + i;
    temp.imag = complex1.imag;
    return temp;
}

//获取实部
double Complex::getreal() {
    return this->real;
}

//获取虚部
double Complex::getImag() {
    return this->imag;
}


int main(){

    //定义两个复数类对象
    Complex complex1(1.3, 2.6);
    Complex complex2(6.3, 3.1);
    //定义一个整数
    int i = 3;

    //输出运算前的参数
    cout<<"c1: " << complex1.getreal() << "+" << complex1.getImag() <<"i"<<endl;
    cout<<"c2: " << complex2.getreal() << "+" << complex2.getImag() <<"i"<<endl;
    cout<<"i = " << i << endl;

    //两个复数类对象的加法计算
    Complex result1;
    result1 = complex1 + complex2;
    cout<<"c1+c2: ";
    cout<<result1.getreal() << "+" << result1.getImag() << "i"<<endl;

    //一个复数类对象与一个整数的加法计算
    Complex result2 = i + complex1;
    cout<<"i+c1: ";
    cout<<result2.getreal() << "+" << result2.getImag() << "i"<<endl;

    //一个复数类对象与一个整数的加法计算
    Complex result3 = complex1 + i;
    cout<< "c1+i: ";
    cout<<result3.getreal() << "+" << result3.getImag() << "i"<<endl;

    system("pause");
    return 0;
}



