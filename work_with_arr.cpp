#include <iostream>
using std::cout;

// Print all array elements
// and nothing else
void show_array(int* m, int s)
{
    int i;
    for (i = 0; i < s; i++) {
        cout << m[i] << ", ";
    }
    cout << (char)8 << (char)8 << "\n";

}

// Fill array function
void fill_array(int* m, int sz)
{
    for (int i = 0; i < sz; i++) {
        m[i] = rand() % 100;

    }

}



//Another sort fuction
void sort2(int* m, int sz)
{
    int i, j;
    int min;
    for (i = 0; i < sz - 1; i++)
    {
        min = 101;
        for (j = i; j < sz - 1; j++) {
            if (m[j] < min) {
                min = m[j];
            }
        }
        // Нашли минимум и надо его поменять с i-м

    }


}

//bublle sort function

int* bublle_sort1(int* m, int sz) {
    int i = 0;
    int reg = 0;
    bool flag = true;
    while (flag == true) {
        flag = false;
        for (i = 0; i < sz - 1; i++) {
            if (m[i] > m[i + 1]) {
                reg = m[i];
                m[i] = m[i + 1];
                m[i + 1] = reg;
                flag = true;
            }
        }
    }
    return m;
}


int main()
{
    const int SIZE = 50;
    int mas[SIZE];
    // Fill array
    fill_array(mas, SIZE);
    show_array(mas, SIZE);
    bublle_sort1(mas, SIZE);
    show_array(mas, SIZE);
}

