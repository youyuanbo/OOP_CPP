#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vector1 = {9,8,7,6,5,4,3,2,1};
    sort(vector1.begin(), vector1.end());
    while (! vector1.empty()){
        cout << vector1.front() << " ";
        vector1.erase(vector1.begin());
    }


//    system("pause");
    return 0;
}