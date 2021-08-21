#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
// Write a program for Octal to binary conversion
int main(){
    int oct,place=0,rem,binary=0,dec=0;
    cout<<"enter the octal number"<<endl;
    cin>>oct;
    //convert octal to decimal
    while (oct!=0)
    {
    rem=oct%10;
     dec=dec+rem*pow(8,place);
     oct=oct/10;
     place++;
    }
    //decimal to binary convertion
    place=1;
    rem=0;
    while (dec!=0)
    {
        rem=dec%2;
        binary=binary+rem*place;
        dec=dec/2;
        place=place*10;
    }
    cout<<binary<<" "<<endl;
    
return 0;
}