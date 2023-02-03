#include <iostream>

void swapV(int a, int b)
{
int temp = a; a = b;
b = temp;
}

void swapR(int* a, int* b)
{
int temp = *a;
*a = *b;
*b = temp;
}

int main()
{
int m = 1; int n = 2;

std::cout << "Initially\n";
std::cout << "m is " << m << ", n is " << n << '\n'; swapV(m, n);
 
std::cout << "After swap, (call by value)\n"; std::cout << "m is " << m << ", n is " << n << '\n'; swapR(&m, &n);
std::cout << "After swap, (call by reference)\n"; std::cout << "m is " << m << ", n is " << n << '\n';

return 0;
}
