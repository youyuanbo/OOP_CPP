//
// Created by youyuanbo on 2019/3/22.
//

#include <iostream>
using namespace std;
int A[20];

int &array(int i){
    A[0] = 1;
    A[1] = 1;
    for (int j = 2; j < i; ++j) {
        A[j] = A[j-1] + A[j-2];
    }
}



int main(){
    array(20);
    for (int i = 0; i < 20; ++i) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}