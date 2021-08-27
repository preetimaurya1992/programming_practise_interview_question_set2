//3. Write a program to express a number as a sum of two prime numbers?
#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    int prim=1,i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            prim=0;
            break;
        }
    }
    return prim;
}


int main(){
    int n,i,p=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(isPrime(i)==1){
            if(isPrime(n-i)==1){
                cout<<i<<"+"<<(n-i)<<"="<<n<<endl;
                p=1;
            }
           
        }
    }
     if(p==0){
            cout<<"not sum of prime "<<endl;
        }
    return 0;
}