#include <iostream>
#include <cstdlib>

using namespace std;

void sortVs() {
    int size;

    cout << "Please, enter a size of the array: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element:";
        cin >> arr[i];
    }


    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        while ((j >= 0) & (arr[j] > arr[j + 1]))
        {
            swap(arr[j], arr[j + 1]);
            j--;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}
int main()
{
    sortVs();
    return 0;
}