#include <stdio.h>

int sum_range(int *start, int *end) {
    end--;
    int static sum = 0;
    if (*start == *end)
    {
        return sum + *start;
    }
    sum = *start + *end;
    start++;
    return sum_range(start, end);
}

int main() {
    int data [] = {10, 20, 30, 40, 50, 60, 70};

    int result = sum_range(&data[1], &data[4]);

    printf("%d\n", result);
    return 0;
}
