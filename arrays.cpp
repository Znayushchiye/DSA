#include <iostream>
int main()
{
    int size;
    std::cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    for (int i : array)
    {
        std::cout << i << " ";
    }
}