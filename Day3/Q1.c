#include <stdio.h>

int main() {
    int n, key, i;
    int arr[100];
    int comparisons = 0;
    int foundIndex = -1;

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    // Output result
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
