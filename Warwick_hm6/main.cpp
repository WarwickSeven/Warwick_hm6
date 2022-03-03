#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void initArray(int *arr, int size)
{
    arr[0] = 1;
    for (size_t i = 1; i < size; i++)
        arr[i] = arr[i-1] << 1;
}

void PrintArray(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1Size;
    cout << "размер массива: ";
    cin >> arr1Size;
    int *array1 = new int[arr1Size];
    
    initArray(array1, arr1Size);
    PrintArray(array1, arr1Size);
    
    delete[] array1;
    array1 = nullptr;
    
    return 0;
}
