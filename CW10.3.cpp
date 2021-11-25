#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
}
struct Date Input(){
    Date a{};
    cout<<"Enter day: ";
    cin >> a.day;
    cout<<"Enter month: ";
    cin >>a.month;
    cout<<"Enter year: ";
    cin >> a.year;

    return a;
}

void Output(Date a) {
    cout << a.day << "." << a.month << "."<< a.year << endl;
}

bool leapYear(int year){
    return (year%4 == 0 and year%100 != 0 and year%400 == 0);
}

Date tomorrow(const Date x){
    int array[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    Date res=x;
    if(leapYear(x.year)) array[1]++;
    if(x.day==array[x.month-1]){
        if(x.month==12){
            res.day=1;
            res.month=1;
            res.year++;
            return res;
        }
        res.day=1;
        res.month++;
        return res;
    }
    res.day+=1;

    return res;
}

Date Day (const Date x){
    int array[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    Date res=x;
    int m = 0, days ;
    while (m < res.month){
        if (res.month == 1){
            days = res.day-1;
        }
        else {
            for (int i = 0; i < m; i++) {
                days = array[i] + res.day-1;
            }
        }
    m++;
    }
    if (days%7==0){
        cout << "Day of this year is Friday";
    }
    else if (days%7==1){
        cout << "Day of this year is Saturday";
    }

    else if (days%7==2){
        cout << "Day of this year is Sunday";
    }

    else if (days%7==3){
        cout << "Day of this year is Monday";
    }

    else if (days%7==4){
        cout << "Day of this year is Tuesday";
    }

    else if (days%7==5){
        cout << "Day of this year is Wednesday";
    }
    else if (days%7==6){
        cout << "Day of this year is Thursday";
    }
}


int main() {

    Date a = Input();
    Output(a);
    a = tomorrow(a);
    Output(a);

    Day(a);
    return 0;
}