/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/
#include <stdio.h>

void printPyramid(int current, int n) {
    if (current > n) {
        return; // Base case: artık satır yok
    }

    // Satırdaki # karakterlerini yazdırmak için yardımcı fonksiyon
    void printHashes(int count) {
        if (count == 0) return;
        printf("#");
        printHashes(count - 1);
    }

    printHashes(current);
    printf("\n");

    printPyramid(current + 1, n); // bir sonraki satır
}

int main() {
    int n;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 1);

    printPyramid(1, n);

    return 0;
}