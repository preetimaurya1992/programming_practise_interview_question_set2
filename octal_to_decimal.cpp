#include<bits/stdc++.h>
using namespace std;
// Write a program for Octal to decimal conversion
int main(){
    int oct,rem,place=0,dec=0;
    cout<<"enter the octal number"<<endl;
    cin>>oct;
    while (oct!=0)
    {
     rem=oct%10;
     dec=dec+rem*pow(8,place);
     place++;
     oct=oct/10;
    }
    cout<<dec<<endl;
    return 0;
}