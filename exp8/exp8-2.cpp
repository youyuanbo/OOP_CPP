//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <math.h>
#include <random>
#include <ctime>

using namespace std;

template <typename T>
void sqrtFunction(T number){
    if (number < 0){
        throw number;
    }
    cout << number << "的平方根是：" << (int) (sqrt(number) * 100) /100.0 << endl;
}

template <typename T>
void doSqrt(T number){
    try {
        sqrtFunction(number);
    }
    catch (T){
        cout << "Number为负数。" << endl;
    }
}

int main(){
    default_random_engine e(time(0));
    uniform_int_distribution<int> u(-100,-1);
    for (int i = 0; i < 10; i++) {
        cout << "Number = " << u(e) << "\t";
        doSqrt(u(e));
    }

    system("pause");
    return 0;
}