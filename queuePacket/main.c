#include "headerFiles/queue.h"
#include <stdio.h>
#include <locale.h>

int main() {
    Queue my_queue;
    int choice, value, result;
    init(&my_queue);
//    setlocale(LC_ALL, "ru_RU.UTF-8");
    printf("=== Queue implementation ===\n");
    while (1) {
        printf("\n1. Add to queue\n");
        printf("2. Remove from queue\n");
        printf("3. Show the queue\n");
        printf("4. Check the void(empty)\n");
        printf("5. Out\n");
        printf("Choose command: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value: ");
                scanf("%d", &value);
                enqueue(&my_queue, value);
                break;
            case 2:
                result = dequeue(&my_queue);
                if (result != -1) {
                    printf("Element %d removed from queue\n", result);
                }
                break;
            case 3:
                print(&my_queue);
                break;
            case 4:
                if (is_empty(&my_queue)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue dont empty.\n");
                }
                break;
            case 5:
                printf("Out...\n");
                return 0;
            default:
                printf("Irregular command!\n");
                break;
        }
    }
}