//
// Created by youyuanbo on 2019/3/22.
//

#include <iostream>
using namespace std;

class Time{
private:
    int hour;
    int minute;
    int sec;
public:
    Time inputTime();
    void outputTime(Time t1);
};

Time Time::inputTime() {
    Time temp;
    cin>>temp.hour;
    cin>>temp.minute;
    cin>>temp.sec;
    return temp;
}

void Time::outputTime(Time t1) {
    cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;
}

int main(){
    Time t1;
    t1 = t1.inputTime();
    t1.outputTime(t1);
    system("pause");
    return 0;
}