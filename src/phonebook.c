/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    char phone[20];
};

int main() {
    struct Person people[5] = {
        {"Ali", "123456"},
        {"Ayse", "987654"},
        {"Mehmet", "555111"},
        {"Fatma", "222333"},
        {"Can", "444999"}
    };

    char search[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", search);

    for (int i = 0; i < 5; i++) {
        if (strcmp(search, people[i].name) == 0) {
            printf("Phone: %s\n", people[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}