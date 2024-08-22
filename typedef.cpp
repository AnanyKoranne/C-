#include <iostream>

using text_t = std::string;
using num_t = int;
int main(){
    num_t age = 17; 
    text_t firstName = "Anany";
    std::cout << age << '\n' << firstName;  
    return 0;
}

// ##INSTEAD OF TYPEDEF KEYWORD USE USING TO CREATE NEW IDENTIFIER FOR A DATA TYPE
// AS USING WORKS BETTER WITH TEMPLATES 