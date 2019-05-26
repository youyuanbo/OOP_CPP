//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <random>

using namespace std;

//计算一元二次方程的根
void ComputeRoot(int a, int b, int c){
    //计算delta
    double delta = pow(b,2) - 4*a*c;
    //delta大于0，有两个根，分别计算
    if (delta > 0){
        double root1 = ((-b) + sqrt(delta)) / (2*a);
        double root2 = ((-b) - sqrt(delta)) / (2*a);
        cout << "参数：" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "有两个根：";
        cout << "Root1 = " << root1 << "\t";
        cout << "Root2 = " << root2 << endl;
        return;
    }
    //delta等于0，有一个根
    if (delta == 0){
        double root = (-b) / (2*a);
        cout << "参数：" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "Root = " << root << endl;
        return;
    }
     //delta小于0,五根，抛出异常
    if (delta < 0){
        throw delta;
    }
}

void doComputeRoot(int a, int b, int c){
    try {
        ComputeRoot(a,b,c);
        //delta小于0时，处理异常
    }catch (double ){
        cout << "参数：" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "Delta小于0,无根。" << endl;
    }
}
//生成测试数据
vector<vector<int>> generatorTestData(){
    //初始化一个二维vector，保存生成的测试数据
    vector<vector<int>> testData(10, vector<int>(3,0));
    default_random_engine e(time(0));
    uniform_int_distribution<unsigned> u(1,100);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            testData[i][j] = u(e);
        }
    }
    return testData;
}
//测试函数
void testComputeRoot(){
    //调用函数，生成测试数据
    vector<vector<int>> testData = generatorTestData();
    for (int i = 0; i < testData.size(); i++) {
        doComputeRoot(testData[i][0], testData[i][1], testData[i][2]);
    }
}

int main(){
    testComputeRoot();
    system("pause");
    return 0;
}