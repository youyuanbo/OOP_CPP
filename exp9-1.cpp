//
// Created by xiaoyou on 2019/5/25.
//

#include <iostream>
using namespace std;

class NineMultiplicationNineTable{
public:
    void display();
    void setNum(int num){
        this->num = num;
    }

    friend ostream &operator<<(ostream &stream, NineMultiplicationNineTable &table);
private:
    int num;
};

ostream &operator<<(ostream &stream, NineMultiplicationNineTable &table){
    stream<<table.num<<"\t";
    return stream;
}

void NineMultiplicationNineTable::display() {
    NineMultiplicationNineTable table;
    cout<<"*\t";
    for (int k = 1; k <= 9; k++) {
        table.setNum(k);
        cout<<table;
    }
    cout<<endl;

    for (int i = 1; i <= 9; i++) {
        table.setNum(i);
        cout<<table;
        for (int j = 1; j <= i; j++) {
            table.setNum(i*j);
            cout<<table;
        }
        cout<<endl;
    }
}

int main(){
    NineMultiplicationNineTable table;
    table.display();
    system("pause");
    return 0;
}