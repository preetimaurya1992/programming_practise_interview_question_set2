#include<bits/stdc++.h>
using namespace std;
// Write a program to find number of integers which has exactly 9 divisors
int main(){
    int n,x=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++){
             if(i%j==0){
             count++;
             }
         }
         if(count==9)
         x++;
    }
    
    cout<<"nine divisors :"<<x<<endl;
    return 0;   
}