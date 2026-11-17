#include <iostream>
using namespace std;

class HelloJava {
    public{
        void PrintHelloWorld() {
            cout << "HelloWorld";
        }
        void nothing() {
            cout << "What else";
        }
}
    
};

int main() {
    //Hello from local
   PrintHelloWorld();
   return 0;

}