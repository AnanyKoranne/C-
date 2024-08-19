#include <iostream>

int main(){
    int x; //declaration 
    x = 5; //assignment
    // we can declare and assign simultaneously 
    int y = 6;
    int sum = x+y;

    // INTEGER DATA TYPE (can store a whole number only)
    int age = 18;
    int year = 2024;

    // DOUBLE DATA TYPE (can store number including decimals)
    double price = 25.9;
    double temp = 25.1;

    // CHAR DATA TYPE (can store single character)
    char grade = 'A';
    char initial = 'V';

    // BOOLEAN DATA TYPE (can only have two states true or false)
    bool student = true;
    bool power = true;

    // CHAR DATA TYPE
    std::string name = "Anany";
    std::cout << "Hello " << name << '\n';
    return 0;
}