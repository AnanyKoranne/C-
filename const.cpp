#include <iostream>

int main(){
    // const is a keyword which modifies a var or value to be constant or read only
    const double PI = 3.14159;
    double rad = 10;
    double circum = 2*PI*rad;
    std::cout << circum << " cm";
    return 0;
}