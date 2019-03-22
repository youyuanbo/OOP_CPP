//
// Created by youyuanbo on 2019/3/22.
//

#include <iostream>
using namespace std;
class Rectangular{
private:    //定义是由属性
    int length;     //长
    int width;      //宽
    int height;     //高
public: //定义共有成员函数
    void volume(Rectangular rectangular);   //计算长方体的体积
    Rectangular input();    //读入长方体的有关参数
};


Rectangular Rectangular::input() {  //定义函数
    Rectangular rectangular;
    cout<<"请输入长：";
    cin>>rectangular.length;
    cout<<"请输入宽：";
    cin>>rectangular.width;
    cout<<"请输入高：";
    cin>>rectangular.height;
    return rectangular;

}

void Rectangular::volume(Rectangular rectangular) { //定义函数
    cout<<"该长方体的体积是："<<rectangular.length * rectangular.width * rectangular.height<<endl;
}

int main(){
    Rectangular rectangular;
    rectangular = rectangular.input();
    rectangular.volume(rectangular);
    system("pause");
    return 0;
}