//
// Created by youyuanbo on 2019/5/9.
//

#include <iostream>
using namespace std;

class Base{
public:
    void setX(int i){
        x = i;
    }

    int getX(){
        return x;
    }


public:
    int x;

};

class Derived: protected Base{
public:
    void setY(int i){
        y = i;
    }

    int getY(){
        return y;
    }

    void show(){
        cout << "Base::x=" << x << endl;
    }

public:
    int y;
};

int main(){
    Derived derived;
    derived.setX(16);
    derived.setY(25);
    derived.show();


    cout << "Base::x=" << derived.x << endl;
    cout << "Derived::y=" << derived.y << endl;
    cout << "Base::x=" << derived.getX() << endl;
    cout << "Derived::y=" << derived.getY() << endl;

    return 0;
}






