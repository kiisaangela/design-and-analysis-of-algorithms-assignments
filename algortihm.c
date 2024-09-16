#include <stdio.h>

int main() {
    int arr[] = {10, 3, 5, 25, 7, 20}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("The maximum element in the array is: %d\n", max);
    
    return 0;
}