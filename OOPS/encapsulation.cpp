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

/*In the above program the variable x is made private. This variable can be accessed and manipulated 
only using the functions get() and set() which are present inside the class. Thus we can say that here, 
the variable x and the functions get() and set() are binded together which is nothing but encapsulation.*/