#include<iostream>
using namespace std;

class abstraction{
    private:
        int a,b;
    public:

        void set(int x,int y){
            a=x;
            b=y;
        }

        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
        }

};

int main(){
    abstraction abc;
    abc.set(8,9);
    abc.display();
    return 0;
}

/*You can see in the above program we are not allowed to access the variables a and b directly, 
however one can call the function set() to set the values in a and b and the function display() to
display the values of a and b.*/