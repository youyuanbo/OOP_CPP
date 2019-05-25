//
// Created by youyuanbo on 2019/5/21.
//

#include <iostream>
using namespace std;

class Complex{
public:


    Complex(int real = 0, int imag = 0){
        this->real = real;
        this->imag = imag;
    }

    Complex(int real){
        this->real = real;
        this->imag = 0;
    }

    Complex operator+(Complex complex1);
    Complex operator+(int i);

    int getReal();
    int getImag();

private:
    int real;
    int imag;
};

Complex Complex::operator+(Complex complex1) {
    Complex temp(0,0);
    temp.real = this->real + complex1.real;
    temp.imag = this->imag + complex1.imag;
    return temp;
}

Complex Complex::operator+(int i) {
    Complex temp(0,0);
    temp.real = this->real + i;
    temp.imag = this->imag;
    return temp;
}

int Complex::getReal() {
    return this->real;
}

int Complex::getImag() {
    return this->imag;
}


int main(){
    Complex complex1(3,7);
    Complex complex2(5,4);
    Complex sum;
//    sum = 1 + complex2;
    sum = complex2 + 5;
    cout << sum.getReal() <<" + " << sum.getImag() << "i" <<endl;
    system("pause");
    return 0;
}



