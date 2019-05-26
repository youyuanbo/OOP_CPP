//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//声明函数
void inputNum();
void display1(vector<int> &element);
void display2(vector<int> &element);
void display3(vector<int> &element);

//输入函数
void inputNum(){
    vector<int> element;
    int temp = -1;
    while (temp != 0){
        cout<<"请输入数字，输入0结束: "<<endl;
        cin>>temp;
        element.push_back(temp);
    }
    //将最后的一个0删除
    element.pop_back();
    //排序
    sort(element.begin(), element.end());
    //复制一个副本
    vector<int> tempElement(element.begin(), element.end());
    //调用三个输出函数，分别输出
    display1(tempElement);
    display2(element);
    display3(element);

}

//使用vector成员函数输出
void display1(vector<int> &element){
    cout << "使用vector成员函数输出：";
    while (! element.empty()){
        cout << element.front() <<" ";
        element.erase(element.begin());
    }
    cout << endl;
}

//使用迭代器自己编程输出
void display2(vector<int> &element){
    //使用迭代器自己编程输出
    cout << "使用迭代器自己编程输出: " ;
    //定义迭代器的开启与结束
    vector<int>::iterator start = element.begin();
    vector<int>::iterator end = element.end();
    while (start != end){
        //输出元素
        cout << *start <<" ";
        start++;
    }
    cout << endl;
}

//定义输出函数，供foreach函数使用
void output(int element){
    cout << element << " ";
}

//使用STL提供的通用算法for_each进行输出
void display3(vector<int> &element){

    cout << "使用STL提供的通用算法for_each进行输出: " ;
    for_each(element.begin(),element.end(),output);
    cout << endl;
}

//测试程序
int main(){
    inputNum();
    system("pause");
    return 0;
}
