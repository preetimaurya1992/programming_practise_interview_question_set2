#include<bits/stdc++.h>
using namespace std;
// Write a program for Decimal to binary conversion
int main(){
    int n,rem,i=1,binary=0;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    while (n!=0)
    {
     rem=n%2;
      n=n/2;
      binary=binary+(rem*i);
      i=i*10;
    }
     cout<<binary<<endl;
    return 0;
}