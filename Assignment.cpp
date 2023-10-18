#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    // float b;
    // cout<<"The address of a is : "<<&a<<endl;
    // cout<<"The address of b is : "<<&b<<endl;

    int *p;
    int *q;

    p=&a;
    q=&b;

    a=2;
    b=5;

    c=*p+*q;

    // cout<<"The value of a is (form the actual variable type) "<<a<<endl;
    // cout<<"The value of a from the pointer using *(asterix/indirection operator) "<<*p<endl;

    cout<<"The value of c is : "<<c<<endl;

    cout<<"The address of a is "<<&a<<" The value of p is "<<p<<endl;

    return 0;
}