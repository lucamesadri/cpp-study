 #include <iostream>

 int main(){

    int x = 5;
    int y = 6;
    int sum = x + y;

    
    /*std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << "the sum is " << sum << '\n';
    */

    double price = 11.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << "the price is " << price << '\n';
    std::cout << "your gpa is " << gpa << '\n';
    std::cout << "the temperature is " << temperature << " C" <<'\n';

    char grade = 'A';
    char initial = 'L';

    std::cout << grade << '\n';
    std::cout << initial << '\n';

    bool student = true;
    bool power = true;
    bool forSale = false;

    std::string name = "Luca Vinícius Mesadri";
    std::string day = "Friday";
    std::cout << day << '\n';
    std::cout << name << '\n';
    return 0;
 }