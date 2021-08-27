#include<bits/stdc++.h>
using namespace std;
//w-rite a program to find Number of days in a given month of a given year
int main(){
    int month,year;
    cout<<"enter the month and year"<<endl;
    cin>>month>>year;
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    cout<<"number of days of this month is 31"<<endl;
    else if((month==2)&&((year%400==0)||(year%4==0&&year%100!=0)))
    cout<<"number of days of this month is 29"<<endl;
    else if(month==2)
    cout<<"number of days of this month is 28"<<endl;
    else
    cout<<"number of days of this month is 30"<<endl;

    return 0;
}