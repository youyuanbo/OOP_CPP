//
// Created by youyuanbo on 2019/3/22.
//

#include <iostream>
using namespace std;

int main(){
    double *area;
    for (int i = 0; i < 10; ++i) {
        area = new double;
        *area = 3.14*i*i;
        cout<<*area<<" ";
    }
    cout<<endl;
    delete(area);
}