#include<bits/stdc++.h>
using namespace std;
//1 Write a program for Decimal to octal conversion
int main(){
    int dec,oct=0,i=1,rem;
    cout<<"enter the decimal number"<<endl;
    cin>>dec;
    while (dec!=0)
    {
        rem=dec%8;
        oct=oct+rem*i;
        i=i*10;
        dec=dec/8;
    }
    cout<<oct<<endl;
    return 0;
}