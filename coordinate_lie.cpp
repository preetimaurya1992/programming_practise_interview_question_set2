#include<bits/stdc++.h>
using namespace std;
// Write a program to find the Quadrants in which coordinates lie
int main(){
    int x,y;
    cout<<"ensert the value for x and y"<<endl;
    cin>>x>>y;
    // to lie first quadrant
    if(x>0&&y>0)
    cout<<"variable of x and y lie in first quadrant"<<endl;
    //to lie second quadrant
    else if(x<0&&y>0)
    cout<<"variable of x and y lie in second quadrant"<<endl;
    //to lie third quadrant
    else if(x<0&&y<0)
    cout<<"variable of x and y lie in third quadrant"<<endl;
    //to lie fourth quadrant
    else if(x>0&&y<0)
    cout<<"variable of x and y lie in fourth quadrant"<<endl;
    // lie on origin
    else
    cout<<"variable of x and y lie on origin"<<endl;
    return 0;
}