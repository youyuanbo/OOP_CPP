#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vector1 = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i < 3; i++) {
        cout<<"please input"<<endl;
        for (int j = 0; j < 3; j++) {
            cin>>vector1[i][j];
        }
    }

    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 3; i++) {
            cout<<vector1[k][i];
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}