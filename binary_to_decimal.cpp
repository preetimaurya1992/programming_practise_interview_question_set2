#include<bits/stdc++.h>
using namespace std;
// Write a program for Binary to decimal conversion
int main(){
    int binary,dec=0,i=0,rem;
    cout<<"enter the binary number"<<endl;
    cin>>binary;
    while (binary!=0)
    {
        rem=binary%10;
        dec=dec+rem*pow(2,i);
        i++;
        binary=binary/10;
    }
    cout<<dec<<endl;
    return 0;
}