//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//从文件中读取数据
vector<string> readFromFile(){
    ifstream input("F:\\file1.txt", ios::in);
    if (!input){
        cout << "文件打开失败。" << endl;
    }
    //将读取的数据存放在element中
    vector<string> element(2);
    input>>element[0];
    input>>element[1];
    //关闭资源文件
    input.close();
    return element;
}

//转大写操作
vector<string> toUpperCase(vector<string> &element){
    for (int i = 0; i < element.size(); i++) {
        transform(element[i].begin(), element[i].end(), element[i].begin(), ::toupper);
    }
    return element;
}

//写出到文件
void writeToFile(vector<string> &element){
    //建立文件连接
    ofstream output("F:\\file2.txt",ios::out);

    if (!output){
        cout << "文件打开失败。" << endl;
    }

    for (int i = 0; i < element.size(); i++) {
        //输出
        output << element[i] <<"\n";
    }
    output.close();
}

int main(){
    vector<string> element = readFromFile();
    element = toUpperCase(element);
    writeToFile(element);
    system("pause");
    return 0;
}