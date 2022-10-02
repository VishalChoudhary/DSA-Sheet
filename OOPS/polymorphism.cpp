#include<iostream>
using namespace std;

class A{
    public:
    void fun(int a){
        cout<<a<<endl;
    }
};

class B{
    public:
    void fun(int a){
        cout<<a<<endl;
    }
};

int main(){
    A a1;
    a1.fun(8);
    B b1;
    b1.fun(9);
    return 0;
}