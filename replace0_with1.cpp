#include<bits/stdc++.h>
using namespace std;
//Write a program to Replace all 0’s with 1 in a given integer
int replace(int n){
  int rem;
  if(n==0)
  return 0;
  rem=n%10;
  if(rem==0)
  rem=1;
 return(replace(n/10)*10+rem);
}
int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    cout<<replace(x)<<endl;
    return 0;
}