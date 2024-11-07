#include <iostream>

namespace Test {
    int a = 10;
    int b = 10;
}
namespace Blah{
    int a = 90;
    int b = 90;
}

int main(){
    /*  Namespace = provides a solution for preventing name conflicts
        in large projects. Each entity needs a unique name.
        A namespace allows for identically named entities
        as long as the namespaces are different.
    */
    int sum = Test::a + Blah::a;
    int sub = Test::b - Blah::b;

    std::cout << "The sum between two diferent Namespace variables is: " << sum << 
    " and the subtraction between two different Namespace variables is " << sub << '\n'; 

    return 0;
}