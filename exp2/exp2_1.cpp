

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
    cout<<"请输入小时：";
    cin>>temp.hour;
    cout<<"请输入分钟：";
    cin>>temp.minute;
    cout<<"请输入秒：";
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