#include<iostream>
using namespace std;

    unsigned long reversed(unsigned long n){
    unsigned long a = n, reversed = 0; 
    while(n!=0){
        a = n%10;
        reversed = reversed * 10 + a;
        n = n/10;
    }
    return reversed;
    }

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=10000){
    while(t--){
    unsigned long n1,n2;
    cin>>n1>>n2;
    unsigned long d = reversed(n1);
    unsigned long e = reversed(n2);
    unsigned long f = reversed(d+e);
    cout<<f<<endl;
    }
    }
    return 0;
}