//
// Created by youyuanbo on 2019/3/22.
//

#include <iostream>
using namespace std;
class Rectangular{
private:    //������������
    int length;     //��
    int width;      //��
    int height;     //��
public: //���干�г�Ա����
    void volume(Rectangular rectangular);   //���㳤��������
    Rectangular input();    //���볤������йز���
};


Rectangular Rectangular::input() {  //���庯��
    Rectangular rectangular;
    cout<<"�����볤��";
    cin>>rectangular.length;
    cout<<"�������";
    cin>>rectangular.width;
    cout<<"������ߣ�";
    cin>>rectangular.height;
    return rectangular;

}

void Rectangular::volume(Rectangular rectangular) { //���庯��
    cout<<"�ó����������ǣ�"<<rectangular.length * rectangular.width * rectangular.height<<endl;
}

int main(){
    Rectangular rectangular;
    rectangular = rectangular.input();
    rectangular.volume(rectangular);
    system("pause");
    return 0;
}