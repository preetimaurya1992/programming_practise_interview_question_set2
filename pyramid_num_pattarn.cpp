#include<bits/stdc++.h>
using namespace std;
// Write a program to print Pyramid pattern using stars
int main(){
    int n;
    cout<<"enter the rows number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(int sim=1;sim<=(2*i)-1;sim++){
            cout<<"5";
        }
        cout<<endl;
    }
    return 0;
}