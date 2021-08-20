#include<bits/stdc++.h>
using namespace std;
//Write a program to print Floyd’s triangle
int main(){
    int n,num=1,i,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}