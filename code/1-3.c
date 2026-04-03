#include <stdio.h>

void print_reverse(int *arr, int size) {
    arr = arr + size - 1;
    while (size != 0)
    {
        printf("%d ", *arr);
        arr--;
        size--;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums, 5);
    printf("\n");
    return 0;
}
