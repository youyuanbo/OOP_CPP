//
// Created by youyuanbo on 2019/3/21.
//

#include <iostream>
using namespace std;

//void maxNum(int x, int y, int z){ //ʹ�ÿ⺯��
//    cout<<"�������ǣ�"<<max(max(x,y),z)<<endl;
//}

void maxNum(int x, int y, int z){   //�Զ��庯��
    int maxInt = 0;
    if (x > y){
        if (x > z){
            maxInt = x;
        } else{
            maxInt = z;
        }
    } else{
        if (x > z){
            maxInt = y;
        } else{
            if (y > z){
                maxInt = y;
            } else{
                maxInt = z;
            }
        }
    }
    cout<<"�������ǣ�"<<maxInt<<endl;
}

//void maxNUm(double x, double y, double z){
//    cout<<"�������ǣ�"<<max(max(x,y),z)<<endl;
//}

void maxNum(double x, double y, double z){  //��������
    double maxInt = 0.0;
    if (x > y){
        if (x > z){
            maxInt = x;
        } else{
            maxInt = z;
        }
    } else{
        if (x > z){
            maxInt = y;
        } else{
            if (y > z){
                maxInt = y;
            } else{
                maxInt = z;
            }
        }
    }
    cout<<"�������ǣ�"<<maxInt<<endl;
}

int main(){
    cout<<"------------------��ѡ��-----------------"<<endl;
    cout<<"-------------1���������������ֵ-----------"<<endl;
    cout<<"-------------2�����������������ֵ----------"<<endl;
    int n = 0;
    cin>>n;
    cout<<endl;
    switch (n){
        case 1:
            int a,b,c;
            cout<<"��������������";
            cin>>a>>b>>c;
            cout<<endl;
            maxNum(a,b,c);

            break;
        case 2:
            double x,y,z;
            cout<<"��������������";
            cin>>x>>y>>z;
            cout<<endl;
            maxNum(x,y,z);
            break;
        default:
            cout<<"ѡ�����"<<endl;
    }
    system("pause");
    return 0;
}