

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
    cout<<"������Сʱ��";
    cin>>temp.hour;
    cout<<"��������ӣ�";
    cin>>temp.minute;
    cout<<"�������룺";
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