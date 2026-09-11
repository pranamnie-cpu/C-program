#include <stdio.h>

int findHighest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int searchMark(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int marks[100];
    int n, key, position;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nHighest mark = %d\n", findHighest(marks, n));

    printf("\nEnter the mark to search: ");
    scanf("%d", &key);

    position = searchMark(marks, n, key);
    if (position != -1)
        printf("Mark %d found at position %d\n", key, position + 1);
    else
        printf("Mark %d not found\n", key);

    return 0;
}
