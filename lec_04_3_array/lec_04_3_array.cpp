
#include <iostream>

int main()
{
    int A[10];
    *A = 0;
    for (int i = 0; i < 10; i++)
    {
        int* p = A + i;
        A[i] = i;
        std::cout << *A << "\n" << p << "\n";
        *A = *A + 1;
    }
    A[0] = 5;
    int* p = A;
    *p = 10;

    std::cout << A[0] << "\n" << p << "\n";
    p = p + 1;
    *p = 20;
    std::cout << A[1] << "\n" << p << "\n";
}

