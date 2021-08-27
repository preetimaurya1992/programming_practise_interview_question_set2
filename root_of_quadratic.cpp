#include<bits/stdc++.h>
using namespace std;
// Write a program to find roots of a quadratic equation
int main(){
    double a,b,c,root1,root2,real_part,imag_part,discriminant;
    cout<<"enter the coefficients of a,b and c"<<endl;
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    // condition define real and different roots
    if(discriminant>0){
       root1=(-b+sqrt(discriminant))/(2*a);
       root2=(-b-sqrt(discriminant))/(2*a);
       cout<<"root1"<<root1<<endl;
       cout<<"root2"<<root2<<endl;
    }
    // condition define real and equal roots
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        cout<<"roots are same root1 and root2"<<root1<<endl;
    }
    //condition define not real roots
    else{
        real_part=-b/(2*a);
        imag_part=sqrt(-discriminant)/(2*a);
        cout<<"root1 :"<<" "<<real_part<<"+"<<imag_part<<"i"<<endl;
        cout<<"root2 :"<<" "<<real_part<<"+"<<imag_part<<"i"<<endl;        
    }
    return 0;
}