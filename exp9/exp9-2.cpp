//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <vector>
using namespace std;

class Martix{

public:
    //定义重载插入运算符函数
    friend ostream &operator<<(ostream &stream, Martix &martix);
    //定义重载提取运算符函数
    friend istream &operator>>(istream &stream, Martix &martix);
    //定义重载加法运算符函数
    friend Martix operator+(Martix &martix1, Martix &martix2);

private:
    //定义一个2*3的矩阵
    vector<vector<int>> element = {{0,0,0},{0,0,0}};

};

//实现重载插入运算符函数，输出加法计算的结果
ostream &operator<<(ostream &output, Martix &martix){
    cout<<"矩阵相加的结果为："<<endl;
    //二重循环实现输出
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            output<<martix.element[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    return output;
}

//实现重载提取运算符函数
istream &operator>>(istream &input, Martix &martix){
    cout<<"请输入一个2*3的矩阵:"<<endl;
    //二重循环实现矩阵的输入
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            input>>martix.element[i][j];
        }
    }
    return input;
}

//实现重载加法运算符函数
Martix operator+(Martix &martix1, Martix &martix2){
    Martix result;
    //二重循环实现矩阵的加法计算
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result.element[i][j] = martix1.element[i][j] + martix2.element[i][j];
        }
    }
    return result;
}

int main(){
    Martix martix1; //第一个矩阵
    Martix martix2; //第二个矩阵
    Martix result;  //加法运算后的结果矩阵

    cin>>martix1;   //输入第一个矩阵
    cin>>martix2;   //输入第二个矩阵
    result = martix1 + martix2; //矩阵相加
    cout<<result;   //输出结果矩阵

    system("pause");
    return 0;
}