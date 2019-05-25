//
// Created by youyuanbo on 2019/3/21.
//

#include <iostream>
using namespace std;

//void maxNum(int x, int y, int z){ //使用库函数
//    cout<<"最大的数是："<<max(max(x,y),z)<<endl;
//}

void maxNum(int x, int y, int z){   //自定义函数
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
    cout<<"最大的数是："<<maxInt<<endl;
}

//void maxNUm(double x, double y, double z){
//    cout<<"最大的数是："<<max(max(x,y),z)<<endl;
//}

void maxNum(double x, double y, double z){  //函数重载
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
    cout<<"最大的数是："<<maxInt<<endl;
}

int main(){
    cout<<"------------------请选择-----------------"<<endl;
    cout<<"-------------1、三个整数求最大值-----------"<<endl;
    cout<<"-------------2、三个浮点数求最大值----------"<<endl;
    int n = 0;
    cin>>n;
    cout<<endl;
    switch (n){
        case 1:
            int a,b,c;
            cout<<"请输入三个数：";
            cin>>a>>b>>c;
            cout<<endl;
            maxNum(a,b,c);

            break;
        case 2:
            double x,y,z;
            cout<<"请输入三个数：";
            cin>>x>>y>>z;
            cout<<endl;
            maxNum(x,y,z);
            break;
        default:
            cout<<"选择错误"<<endl;
    }
    system("pause");
    return 0;
}