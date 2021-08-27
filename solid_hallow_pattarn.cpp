#include<bits/stdc++.h>
using namespace std;
// Write a program to print Solid and hollow rectangle star pattern
int main(){
    int n,m;
    cout<<"enter the height and width as n and m"<<endl;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}