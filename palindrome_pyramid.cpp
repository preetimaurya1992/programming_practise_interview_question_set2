#include<bits/stdc++.h>
using namespace std;
// Write a program to print Palindromic pyramid pattern printing
int main(){
    int a,b,c,i,j,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=i-1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}