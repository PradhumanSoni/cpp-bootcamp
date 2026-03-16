#include <iostream>
using namespace std;

class Demo {
    public:
        int *ptr;

        Demo(int val) {
            ptr = new int;
            *ptr = val+1;
        }

        ~Demo() {
            delete ptr;
            // ptr is now a dangling pointer — points to freed memory
        }
};

int main() {
    Demo d(42);
    cout << *d.ptr << endl;   // valid here
    //d.~Demo();                // explicit destructor call — memory freed
    //cout << *d.ptr << endl;   // UNDEFINED BEHAVIOR: accessing freed memory
    return 0;                 // destructor fires again — double deletion
}