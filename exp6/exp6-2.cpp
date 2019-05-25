//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <vector>
using namespace std;

class TwoDimensionalArray{

public:
    TwoDimensionalArray();  //构造函数

    void display(); //打印构造函数中初始化的二维数组
    void display(vector<vector<int>> &vector2); //打印任意二维数组

    void inputArray(vector<vector<int>> &vector2);  //输入二维数组

    void operator+(vector<vector<int>> vector2);    //加法运算符重载

    void operator-(vector<vector<int>> vector2);    //减法云算法重载

private:
    vector<vector<int>> vector1;    //定义二维数组

};

TwoDimensionalArray::TwoDimensionalArray() {
    //在构造函数中，实例化二维数组
    vector1 = {{7,8,9}, {4,5,6}, {1,2,3} };
}

void TwoDimensionalArray::display() {
    //打印在构造函数中初始化的二维数组
    cout<<"初始化的数组是："<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<vector1[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void TwoDimensionalArray::display(vector<vector<int>> &vector2) {
    //打印其他任意二维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<vector2[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void TwoDimensionalArray::inputArray(vector<vector<int>> &vector2) {
    //由用户输入一个二维数组
    cout<<"请输入一个3x3的数组: "<< endl;

    for (int i = 0; i < 3; i++) {
        cout<<"请输入第"<<i+1<<"行,以空格分隔: "<<endl;
        for (int j = 0; j < 3; j++) {
            cin>>vector2[i][j];
        }
    }
    //利用类对象调用函数来输出二维数组
    TwoDimensionalArray array;
    cout<<"你输入的数组是："<<endl;
    array.display(vector2);
}

// 加法运算符重载
void TwoDimensionalArray::operator+(vector<vector<int>> vector2) {
    //初始化临时二维数组
    vector<vector<int>> temp = {{0,0,0},{0,0,0},{0,0,0}};
    //二维数组加法运算的具体执行步骤
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = vector1[i][j] + vector2[i][j];
        }
    }

    //显示运算后的二维数组
    cout<<"二维数组相加后的结果："<<endl;
    TwoDimensionalArray array;
    array.display(temp);
}

//减法运算符重载
void TwoDimensionalArray::operator-(vector<vector<int>> vector2) {
    //定义并初始化临时二维数组
    vector<vector<int>> temp = {{0,0,0},{0,0,0},{0,0,0}};
    //二维数组减法运算的具体执行步骤
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = vector1[i][j] - vector2[i][j];
        }
    }

    //显示运算后的二维数组
    cout<<"二维数组相减后的结果："<<endl;
    TwoDimensionalArray array;
    array.display(temp);
}


int main(){
    //创建类对象
    TwoDimensionalArray array;
    //打印构造函数中初始化的二维数组
    array.display();
    //定义用户输入的二维数组
    vector<vector<int>> vector1 = {{0,0,0},{0,0,0},{0,0,0}};
    //调用函数，由用户输入一个二维数组
    array.inputArray(vector1);
    //执行加法运算
    array.operator+(vector1);
    //执行减法运算
    array.operator-(vector1);
    system("pause");
    return 0;
}