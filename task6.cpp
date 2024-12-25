//ARRAY SORTING :

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size, bool ascending) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[100];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "\nEnter the elements of the array :" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    char order;
    cout << "\nEnter 'a' for ascending order or 'd' for descending order: ";
    cin >> order;

    bool ascending = (order == 'a');
    bubble_sort(arr, size, ascending);

    cout << "\nSorted array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
