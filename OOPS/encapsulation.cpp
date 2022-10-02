#include<iostream>
using namespace std;

class encapsulation{

    private:
        int a;
    
    public:
        void set(int x){
            a=x;
        }

        void get(){
            cout<<a<<endl;
        }

};

int main(){
    encapsulation en;
    en.set(8);
    en.get();
    return 0;
}