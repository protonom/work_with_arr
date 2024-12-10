#include <iostream>
#include <random>
#include <cstring>

// fill_arr_function

void fill_arr(int* ARR, int size)
{
    for (int i = 0; i < size; i++) 
    {
        ARR[i] = rand() % 100;
    }
}

// show_arr_function

void show_arr(int* ARR, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << ARR[i] << ", ";
    }
}
int* sortirate(int* ARR, int size) 
{
    int i = 0;
    for (i = 0; i < size; i++) 
    {
        if (ARR[i] > ARR[i + 1]) {
            ARR[i] = ARR[i + 1];
        }
    }
    return ARR;
}
    
int main()
{
    const int SIZE = 10;
    int ARR[SIZE];
    fill_arr(ARR, SIZE);
    show_arr(ARR, SIZE);
    sortirate(ARR, SIZE);
}
