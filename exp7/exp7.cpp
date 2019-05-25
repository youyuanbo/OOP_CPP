//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
#include <math.h>
using namespace std;

//抽象类
class container{
protected:
    //半径
    double radius;

public:
    //构造函数
    container(double radius){
        this->radius = radius;
    }
    //定义计算表面积的纯虚函数
    virtual double suface_area() = 0;
    //定义计算体积的纯虚函数
    virtual double volume() = 0;
};

//定义正方体类，继承container抽象类
class cube : public container{

public:
    //定义正方体类的构造函数
    cube(double radius) : container(radius){

    }
    //计算正方体的表面积
    double suface_area(){
        return radius * radius * 6;
    }
    //计算正方体的体积
    double volume(){
        return pow(radius, 3);
    }
};

//定义球体类，继承container抽象类
class sphere : public container{
public:
    //定义球体类的构造函数
    sphere(double radius) : container(radius){

    }
    //计算球体的表面积
    double suface_area(){
        return 4 * PI * pow(radius, 2);
    }
    //计算球体的体积
    double volume(){
        return 4.0/3.0 * PI * pow(radius, 3);
    }

private:
    //定义圆周率
    double PI = 3.14;
};

//定义圆柱体类，继承container抽象类
class cylinder : public container{
public:
    //定义圆柱体类的构造函数
    cylinder(double radius, double high) : container(radius){
        this->high = high;
    }
    //计算圆柱体的表面积
    double suface_area(){
        return 2 * PI * pow(radius, 2) + 2 * PI * radius * high;
    }
    //计算圆柱体的体积
    double volume(){
        return PI * pow(radius, 2) * high;
    }

private:
    // 定义高
    double high;
    //定义圆周率
    double PI = 3.14;
};


int main(){
    cube cube1(6.0);
    cout << "边长为6.0的正方体的表面积为：" << cube1.suface_area()<< endl;
    cout << "边长为6.0的正方体的体积为：" << cube1.volume() << endl;
    cout<<endl;

    sphere sphere1(5.0);
    cout << "半径为5.0的球的表面积为：" << sphere1.suface_area() <<endl;
    cout << "半径为5.0的球的体积为：" << sphere1.volume() << endl;
    cout<<endl;

    cylinder cylinder1(5.0, 6.0);
    cout << "半径为5.0，高为6.0的圆柱体的表面积为：" << cylinder1.suface_area() << endl;
    cout << "半径为5.0，高为6.0的圆柱体的体积为：" << cylinder1.volume() << endl;
    cout<<endl;

    system("pause");
    return 0;
}

