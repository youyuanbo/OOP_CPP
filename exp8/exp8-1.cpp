//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <random>
#include <typeinfo>
#include <ctime>
using namespace std;

//�������е����ֵ
template <typename T>
void max_element(vector<T> element){
    //����ĳ���
    int length = element.size();
    cout<<endl;
    //��ʼ�����ֵ��Ϊ����ĵ�һ��Ԫ��
    T max_num = element[0];
    //ѭ���Ƚϣ�����������Ԫ��
    for (int i = 1; i < length; i++) {
        if (max_num < element[i]){
            max_num = element[i];
        }
    }
    //������Ԫ��
    cout << "�����е����ֵ�ǣ�" << max_num << endl;
}

//�������е���Сֵ
template <typename T>
void min_element(vector<T> element){
    //����ĳ���
    int length = element.size();
    cout<<endl;
    //��ʼ����Сֵ��Ϊ����ĵ�һ��Ԫ��
    T min_num = element[0];
    //ѭ���Ƚϣ����������СԪ��
    for (int i = 1; i < length; i++) {
        if (min_num > element[i]){
            min_num = element[i];
        }
    }
    //�����СԪ��
    cout << "�����е���Сֵ�ǣ�" << min_num << endl;
    cout << endl;
}

//����ָ��������ָ�����ͣ�ָ������Ĳ�������
template <typename T>
vector<T> generatorTestData(int n, T a, T b){
    vector<T> element;
    //���ղ������ݵ�����
    string typeT = typeid(T).name();
    //int����
    if ("i" == typeT){
        default_random_engine e(time(0));
        uniform_int_distribution<unsigned> u(a,b);
        for (int i = 0; i < n; i++) {
            //�����������
            element.push_back(u(e));
        }
    }
    //double����
    if ("d" == typeT){
        default_random_engine e(time(0));
        uniform_real_distribution<double> u(1.0,100.0);
        for (int i = 0; i < n; i++) {
            //�����������������������λ����
            double temp  = (int) (u(e) * 100) / 100.0;
            element.push_back(temp);
        }
    }
    //������ɵ������
    cout<< "���ɵĲ�������Ϊ��" << endl;
    for (int j = 0; j < n; j++) {
        cout << element[j] << " ";
    }
    cout<<endl;

    return element;
}


int main(){
    //���ú��������ɲ�������
    vector<double > element = generatorTestData(10, 1.0,100.0);
    //����������Ԫ��
    max_element(element);
    //���������СԪ��
    min_element(element);
    system("pause");
    return 0;
}