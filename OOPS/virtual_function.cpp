#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void fun(){
            cout<<"Base";
        }
};

class B:public A{
    public:
    void fun(){
        cout<<"Derived";
    }
};

int main(){
    A *a=new B;
    a->fun();
    return 0;
}