#include<bits/stdc++.h>
using namespace std;
/*Write a program to find number of times digit 3 occurs in each and every 
number from 0 to n */
int digit_3(int x){
    int count=0;
    while (x!=0)
    {
      if(x%10==3){
      count++;
      }
      x=x/10;
    }
    return count;
}
int range(int n){
    int count=0;
        for(int i=2;i<=n;i++){
          count=count+digit_3(i);
        }
            return count;
}
int main(){
    int n;
    cout<<"enter the number for 3 digit occurs count"<<endl;
    cin>>n;
    int threeDigit=range(n);
    cout<<threeDigit<<endl;
    return 0;
}
