#include <iostream>
#include <random>
#include <cstring>

// fill_arr_function

void fill_arr(int* ARR, int size)
{
    for (int i = 0; i < size; i++) {
        ARR[i] = (rand() % 101 * (-1)) % 101 * (-1);
    }
}

// show_arr_function

void show_arr(int* ARR, int size) 
{
    for (int i = 0; i < size; i++) {
        std::cout << ARR[i] << ", ";
    }
}
    
int main()
{
    const int SIZE = 1000;
    int ARR[SIZE];
    fill_arr(ARR, SIZE);
    show_arr(ARR, SIZE);
}
