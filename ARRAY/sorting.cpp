#include <iostream>
using namespace std;

void sortarray(int array[], int size);

int main()
{
    int arr[] = {1, 3, 2, 9, 6, 4, 5, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);


sortarray(arr, size);

   for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
}

    

    return 0;
}
void sortarray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}