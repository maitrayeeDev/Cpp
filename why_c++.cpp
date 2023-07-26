// Reasons why use c++
// Perfomance, Portability, OOPs, Low-level like memory manipulation as well as high level like oops, extensive libs, combination with c, active community

#include <iostream>
// oops
class MyClass {
public:
    void myFunction(){
        std::cout << "Hello" << std::endl;
    }
};

int main() {
    MyClass myObj;
    myObj.myFunction();
}