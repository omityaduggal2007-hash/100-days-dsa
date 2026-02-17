#include <stdio.h>

int main() {
    int n, i;
    
    // Take size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Take array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Assume first element is max and min
    int max = arr[0];
    int min = arr[0];
    
    // Traverse array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print result
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    
    return 0;
}
