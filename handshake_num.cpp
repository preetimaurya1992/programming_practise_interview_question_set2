#include<bits/stdc++.h>
using namespace std;
// Write a program to calculate Maximum number of handshakes
int main(){
    int num ,maxnum;
    cout<<"enter the number for handshakes"<<endl;
    cin>>num;
    maxnum=num*(num-1)/2;
    cout<<maxnum<<endl; 
    return 0;
}