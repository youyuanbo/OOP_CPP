//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <random>
#include <typeinfo>
#include <ctime>
using namespace std;

//求数组中的最大值
template <typename T>
void max_element(vector<T> element){
    //数组的长度
    int length = element.size();
    cout<<endl;
    //初始化最大值，为数组的第一个元素
    T max_num = element[0];
    //循环比较，求数组的最大元素
    for (int i = 1; i < length; i++) {
        if (max_num < element[i]){
            max_num = element[i];
        }
    }
    //输出最大元素
    cout << "数组中的最大值是：" << max_num << endl;
}

//求数组中的最小值
template <typename T>
void min_element(vector<T> element){
    //数组的长度
    int length = element.size();
    cout<<endl;
    //初始化最小值，为数组的第一个元素
    T min_num = element[0];
    //循环比较，求数组的最小元素
    for (int i = 1; i < length; i++) {
        if (min_num > element[i]){
            min_num = element[i];
        }
    }
    //输出最小元素
    cout << "数组中的最小值是：" << min_num << endl;
    cout << endl;
}

//生成指定个数，指定类型，指定区间的测试数据
template <typename T>
vector<T> generatorTestData(int n, T a, T b){
    vector<T> element;
    //接收测试数据的类型
    string typeT = typeid(T).name();
    //int类型
    if ("i" == typeT){
        default_random_engine e(time(0));
        uniform_int_distribution<unsigned> u(a,b);
        for (int i = 0; i < n; i++) {
            //生成随机整数
            element.push_back(u(e));
        }
    }
    //double类型
    if ("d" == typeT){
        default_random_engine e(time(0));
        uniform_real_distribution<double> u(1.0,100.0);
        for (int i = 0; i < n; i++) {
            //生成随机浮点数，并保留两位数字
            double temp  = (int) (u(e) * 100) / 100.0;
            element.push_back(temp);
        }
    }
    //输出生成的随机数
    cout<< "生成的测试数据为：" << endl;
    for (int j = 0; j < n; j++) {
        cout << element[j] << " ";
    }
    cout<<endl;

    return element;
}


int main(){
    //调用函数，生成测试数据
    vector<double > element = generatorTestData(10, 1.0,100.0);
    //求数组的最大元素
    max_element(element);
    //求数组的最小元素
    min_element(element);
    system("pause");
    return 0;
}