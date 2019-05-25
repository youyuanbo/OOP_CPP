//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <vector>
using namespace std;

class TwoDimensionalArray{

public:
    TwoDimensionalArray();  //���캯��

    void display(); //��ӡ���캯���г�ʼ���Ķ�ά����
    void display(vector<vector<int>> &vector2); //��ӡ�����ά����

    void inputArray(vector<vector<int>> &vector2);  //�����ά����

    void operator+(vector<vector<int>> vector2);    //�ӷ����������

    void operator-(vector<vector<int>> vector2);    //�������㷨����

private:
    vector<vector<int>> vector1;    //�����ά����

};

TwoDimensionalArray::TwoDimensionalArray() {
    //�ڹ��캯���У�ʵ������ά����
    vector1 = {{7,8,9}, {4,5,6}, {1,2,3} };
}

void TwoDimensionalArray::display() {
    //��ӡ�ڹ��캯���г�ʼ���Ķ�ά����
    cout<<"��ʼ���������ǣ�"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<vector1[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void TwoDimensionalArray::display(vector<vector<int>> &vector2) {
    //��ӡ���������ά����
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<vector2[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void TwoDimensionalArray::inputArray(vector<vector<int>> &vector2) {
    //���û�����һ����ά����
    cout<<"������һ��3x3������: "<< endl;

    for (int i = 0; i < 3; i++) {
        cout<<"�������"<<i+1<<"��,�Կո�ָ�: "<<endl;
        for (int j = 0; j < 3; j++) {
            cin>>vector2[i][j];
        }
    }
    //�����������ú����������ά����
    TwoDimensionalArray array;
    cout<<"������������ǣ�"<<endl;
    array.display(vector2);
}

// �ӷ����������
void TwoDimensionalArray::operator+(vector<vector<int>> vector2) {
    //��ʼ����ʱ��ά����
    vector<vector<int>> temp = {{0,0,0},{0,0,0},{0,0,0}};
    //��ά����ӷ�����ľ���ִ�в���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = vector1[i][j] + vector2[i][j];
        }
    }

    //��ʾ�����Ķ�ά����
    cout<<"��ά������Ӻ�Ľ����"<<endl;
    TwoDimensionalArray array;
    array.display(temp);
}

//�������������
void TwoDimensionalArray::operator-(vector<vector<int>> vector2) {
    //���岢��ʼ����ʱ��ά����
    vector<vector<int>> temp = {{0,0,0},{0,0,0},{0,0,0}};
    //��ά�����������ľ���ִ�в���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = vector1[i][j] - vector2[i][j];
        }
    }

    //��ʾ�����Ķ�ά����
    cout<<"��ά���������Ľ����"<<endl;
    TwoDimensionalArray array;
    array.display(temp);
}


int main(){
    //���������
    TwoDimensionalArray array;
    //��ӡ���캯���г�ʼ���Ķ�ά����
    array.display();
    //�����û�����Ķ�ά����
    vector<vector<int>> vector1 = {{0,0,0},{0,0,0},{0,0,0}};
    //���ú��������û�����һ����ά����
    array.inputArray(vector1);
    //ִ�мӷ�����
    array.operator+(vector1);
    //ִ�м�������
    array.operator-(vector1);
    system("pause");
    return 0;
}