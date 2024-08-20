#include <iostream>

// Name space assign different value for the same variable name under different namespaces
// :: this is called resolution operator
namespace first
{
    int x =1;
} // namespace first

namespace second
{
    int x =2;
} // namespace second


int main(){
    int x =0;
    std::cout << first::x;
    std::cout << second::x;
    std::cout << x; 
    return 0;
}

