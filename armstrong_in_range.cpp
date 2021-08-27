//2. Write a program to print Armstrong numbers between two intervals
#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end,i,rem,x,sum;
    cout<<"enter the  start and end value for armstrong number"<<endl;
    cin>>start>>end;
    cout<<"armstrong numbers are :";
    for(i=start;i<=end;i++){
        x=i;
         sum=0;
        while(x!=0){
           rem=x%10;
           sum=sum+rem*rem*rem;
           x=x/10;
        }
        if(sum==i){
        cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}