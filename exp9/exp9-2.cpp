//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <vector>
using namespace std;

class Martix{

public:
    //�������ز������������
    friend ostream &operator<<(ostream &stream, Martix &martix);
    //����������ȡ���������
    friend istream &operator>>(istream &stream, Martix &martix);
    //�������ؼӷ����������
    friend Martix operator+(Martix &martix1, Martix &martix2);

private:
    //����һ��2*3�ľ���
    vector<vector<int>> element = {{0,0,0},{0,0,0}};

};

//ʵ�����ز������������������ӷ�����Ľ��
ostream &operator<<(ostream &output, Martix &martix){
    cout<<"������ӵĽ��Ϊ��"<<endl;
    //����ѭ��ʵ�����
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            output<<martix.element[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    return output;
}

//ʵ��������ȡ���������
istream &operator>>(istream &input, Martix &martix){
    cout<<"������һ��2*3�ľ���:"<<endl;
    //����ѭ��ʵ�־��������
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            input>>martix.element[i][j];
        }
    }
    return input;
}

//ʵ�����ؼӷ����������
Martix operator+(Martix &martix1, Martix &martix2){
    Martix result;
    //����ѭ��ʵ�־���ļӷ�����
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result.element[i][j] = martix1.element[i][j] + martix2.element[i][j];
        }
    }
    return result;
}

int main(){
    Martix martix1; //��һ������
    Martix martix2; //�ڶ�������
    Martix result;  //�ӷ������Ľ������

    cin>>martix1;   //�����һ������
    cin>>martix2;   //����ڶ�������
    result = martix1 + martix2; //�������
    cout<<result;   //����������

    system("pause");
    return 0;
}