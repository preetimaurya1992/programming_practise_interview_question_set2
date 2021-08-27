#include<bits/stdc++.h>
using namespace std;
//1. Write a program to print prime numbers in a given range

int main(){
    int start,end,prime,i,x;
    cout<<"enter the start and end number"<<endl;
    cin>>start>>end;
    for( i=start;i<=end-1;i++){
        for(x=2;x<i;x++){
            if(i%x==0){
             break;
            }
        }
       if(i==x){
               cout<<i<<" ";
            }          
    }
     
    return 0;
}