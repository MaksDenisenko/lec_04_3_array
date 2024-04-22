
#include <iostream>

int main()
{
    int A[10];
    A[0] = 5;
    int* p = &(A[0]);

    std::cout << A[0] << "\n " << p;
}

