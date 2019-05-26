//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <random>

using namespace std;

//����һԪ���η��̵ĸ�
void ComputeRoot(int a, int b, int c){
    //����delta
    double delta = pow(b,2) - 4*a*c;
    //delta����0�������������ֱ����
    if (delta > 0){
        double root1 = ((-b) + sqrt(delta)) / (2*a);
        double root2 = ((-b) - sqrt(delta)) / (2*a);
        cout << "������" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "����������";
        cout << "Root1 = " << root1 << "\t";
        cout << "Root2 = " << root2 << endl;
        return;
    }
    //delta����0����һ����
    if (delta == 0){
        double root = (-b) / (2*a);
        cout << "������" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "Root = " << root << endl;
        return;
    }
     //deltaС��0,������׳��쳣
    if (delta < 0){
        throw delta;
    }
}

void doComputeRoot(int a, int b, int c){
    try {
        ComputeRoot(a,b,c);
        //deltaС��0ʱ�������쳣
    }catch (double ){
        cout << "������" << "a = " << a <<", b = "<<b<<", c = "<<c<<endl;
        cout << "DeltaС��0,�޸���" << endl;
    }
}
//���ɲ�������
vector<vector<int>> generatorTestData(){
    //��ʼ��һ����άvector���������ɵĲ�������
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
//���Ժ���
void testComputeRoot(){
    //���ú��������ɲ�������
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