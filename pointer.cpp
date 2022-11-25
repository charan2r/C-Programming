#include <iostream>
using namespace std;

int main() {
    int num=40;
    int *q;
    q = &num;
    cout <<*q<<endl;
    int a=20,b=10,*p1=&a,*p2=&b;
    *p1 = *p1+*p2;
    *p2 = *p1-*p2;
    *p1 = *p1-*p2;
    cout<<"p1="<<*p1 <<endl <<"p2="<<*p2;
    
    
}