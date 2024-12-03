
#include <iostream>

int main()
{
    const int size = 8;
    int ARR[size];

    for (int i = 0; i < size; i++) {
        ARR[i] = size - i;
    }
    for (int i = 0; i < 8; i++) {
        std::cout << ARR[i] << ", ";
    }
    std::cout << (char)8 << (char)8;
}

