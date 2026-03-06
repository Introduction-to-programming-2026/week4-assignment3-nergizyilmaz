/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/
#include <stdio.h>

int main() {
    int numbers[] = {3, 7, 12, 19, 25, 8, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;
    int found = 0;

    printf("Enter a number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}