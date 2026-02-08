#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    // Input size
    scanf("%d", &n);

    // Input sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // If array is empty
    if (n == 0)
        return 0;

    int k = 1;  // position for next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    // Print unique elements
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
