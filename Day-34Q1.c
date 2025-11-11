#include <stdio.h>

int main() {
    int n, i, arr[100], pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Shift elements to the right from position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the key at given position
    arr[pos] = key;
    n++; // increase array size

    // Print updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
