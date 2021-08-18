//Calculate the cube of 3, 4 and 5 using inline cube function
#include <iostream>
inline int cube(int s)
{
    return s * s * s;
}

int main()
{
    int s;
    std::cin >> s;
    std::cout << cube(s);
    return 0;
}