//26. Write a program to print Pascal triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n,i,j;
    cout<<"enter the number for total rows"<<endl;
    cin>>num;
    for(i=0;i<num;i++){
        for(int space=0;space<num-i-1;space++){
            cout<<" ";
        }
        n=1;
        for(j=0;j<=i;j++){
            cout<<n<<" ";
            n=n*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}