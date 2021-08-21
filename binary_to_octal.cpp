#include<bits/stdc++.h>
using namespace std;
// Write a program for binary to Octal conversion
int main(){
    int binary,rem,dec=0,oct=0,i=0;
    cout<<"enter the binary number"<<endl;
    cin>>binary;
    //convert binary to decimal
    while (binary!=0)
    {
        rem=binary%10;
         dec=dec+rem*pow(2,i);
         binary=binary/10;
         i++;
    }
    cout<<dec<<endl;
    //convert decimal to octal
    i=1;
    while (dec!=0)
    {
      oct=oct+(dec%8)*i;
      dec=dec/8;
      i=i*10;
    }
    cout<<oct<<endl;
    return 0;
}