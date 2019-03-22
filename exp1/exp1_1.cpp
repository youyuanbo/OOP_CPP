//
// Created by youyuanbo on 2019/3/21.
//

#include <iostream>
using namespace std;
int add(int x, int y);
int main()
{
    int a,b;
    int c;
    c = add(a,b);
    cout<<"a+b="<<c<<endl;
    return 0;
}

int add(int x, int y)
{
    int z;
    z = x + y;
    return (z);
}