#include <iostream>

using namespace std;

void reverse_array(int* arr, int size) {

    int *start = arr;
    int *end = arr + size - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
    for (int i = 0; i < 5; i++) 
        cout << arr[i] << " ";
    cout << endl;
    
}

int main () {
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < 5; i++) 
        cout << arr[i] << " ";
    cout << endl;
    
    reverse_array(arr, size);
    
    return 0;
    
}
