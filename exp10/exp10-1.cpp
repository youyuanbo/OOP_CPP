//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <fstream>
using namespace std;

//将内容输出到指定的文件中
void outputToFile(){
    //定义输出对象，输出路径
    ofstream output("F:\\socket.txt", ios::out);
    //判断文件是否打开成功
    if (!output){
        cout << "文件打开失败" << endl;
        return;
    }
    //输出到文件中
    output << "Zhang ming li 100001\n";
    output << "Wang li li    100002\n";
    output << "Li mu zhe    100003\n";
    //关闭输出流
    output.close();
}

int main(){
    outputToFile();
    system("pause");
    return 0;
}