#include<bits/stdc++.h>
using namespace std;
// Write a program to find Permutations in which n people can occupy r seats 
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n,r,p;
    cout<<"ensert the value of n people and r seat"<<endl;
    cin>>n>>r;
    if(n>r)
    cout<<"can not adjust"<<n<<"people for"<<r<<"seats"<<endl;
    else{
      p=fact(r)/fact(r-n);
      cout<<p<<endl;
    }
    return 0;
}