//
// Created by xiaoyou on 2019/5/26.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//��������
void inputNum();
void display1(vector<int> &element);
void display2(vector<int> &element);
void display3(vector<int> &element);

//���뺯��
void inputNum(){
    vector<int> element;
    int temp = -1;
    while (temp != 0){
        cout<<"���������֣�����0����: "<<endl;
        cin>>temp;
        element.push_back(temp);
    }
    //������һ��0ɾ��
    element.pop_back();
    //����
    sort(element.begin(), element.end());
    //����һ������
    vector<int> tempElement(element.begin(), element.end());
    //������������������ֱ����
    display1(tempElement);
    display2(element);
    display3(element);

}

//ʹ��vector��Ա�������
void display1(vector<int> &element){
    cout << "ʹ��vector��Ա���������";
    while (! element.empty()){
        cout << element.front() <<" ";
        element.erase(element.begin());
    }
    cout << endl;
}

//ʹ�õ������Լ�������
void display2(vector<int> &element){
    //ʹ�õ������Լ�������
    cout << "ʹ�õ������Լ�������: " ;
    //����������Ŀ��������
    vector<int>::iterator start = element.begin();
    vector<int>::iterator end = element.end();
    while (start != end){
        //���Ԫ��
        cout << *start <<" ";
        start++;
    }
    cout << endl;
}

//���������������foreach����ʹ��
void output(int element){
    cout << element << " ";
}

//ʹ��STL�ṩ��ͨ���㷨for_each�������
void display3(vector<int> &element){

    cout << "ʹ��STL�ṩ��ͨ���㷨for_each�������: " ;
    for_each(element.begin(),element.end(),output);
    cout << endl;
}

//���Գ���
int main(){
    inputNum();
    system("pause");
    return 0;
}
