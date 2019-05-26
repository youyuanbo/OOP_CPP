//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
using namespace std;

//定义九九乘法表
class NineMultiplicateNineTable{
public:
    //定义打印函数
    void display();
    //定义传值函数
    void setNum(int num){
        this->num = num;
    }
    //定义运算符重载函数
    friend ostream &operator<<(ostream &stream, NineMultiplicateNineTable &table);
private:
    int num;
};

//实现运算符重载函数
//按指定格式打印
ostream &operator<<(ostream &stream, NineMultiplicateNineTable &table){
    stream<<table.num<<"\t";
    return stream;
}

//九九乘法表输出函数的具体实现
void NineMultiplicateNineTable::display() {
    NineMultiplicateNineTable table;
    cout<<"*\t";
    //打印第一行的基数
    for (int k = 1; k <= 9; k++) {
        table.setNum(k);
        cout<<table;
    }
    cout<<endl;
    //打印九九乘法表
    for (int i = 1; i <= 9; i++) {
        table.setNum(i);
        //打印左边的一列基数
        cout<<table;
        for (int j = 1; j <= i; j++) {
            table.setNum(i*j);
            cout<<table;
        }
        cout<<endl;
    }
}

//主函数
int main(){
    NineMultiplicateNineTable table;
    //调用输出函数，输出九九乘法表
    table.display();
    system("pause");
    return 0;
}