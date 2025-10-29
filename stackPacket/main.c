#include "headerFiles/stack.h"
#include <stdio.h>

int main() {
    Stack my_stack;
    int choice, value;
    init(&my_stack);
    printf("=== Stack implementation ===\n");
    while (1) {
        printf("\n1. Added element in stack\n");
        printf("2. Remove element from stack\n");
        printf("3. Show the stack\n");
        printf("4. Check the void\n");
        printf("0. Out\n");
        printf("Choose command: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Out...\n");
                return 0;
            case 1:
                printf("Enter the value: ");
                scanf("%d", &value);
                push(&my_stack, value);
                break;
            case 2:
                value = pop(&my_stack);
                printf("Element %d removed from stack\n", value);
                break;
            case 3:
                print(&my_stack);
                break;
            case 4:
                if (is_empty(&my_stack)) {
                    printf("stack is empty\n");
                } else {
                    printf("stack dont empty\n");
                }
                break;
            default:
                printf("irregular command\n");
                break;
        }
    }
}