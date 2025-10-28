#include "headerFiles/queue.h"
#include <stdio.h>

int main() {
    Queue my_queue;
    int choice, value, result;
    init(&my_queue);
    printf("=== Реализация очереди ===\n");
    while (1) {
        printf("\n1. Добавить в очередь\n");
        printf("2. Удалить из очереди\n");
        printf("3. Показать очередь\n");
        printf("4. Проверить пустоту\n");
        printf("5. Выход\n");
        printf("Выберите команду: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Введите значение: ");
                scanf("%d", &value);
                enqueue(&my_queue, value);
                break;
            case 2:
                result = dequeue(&my_queue);
                if (result != -1) {
                    printf("Элемент %d удален из очереди.\n", result);
                }
                break;
            case 3:
                print(&my_queue);
                break;
            case 4:
                if (is_empty(&my_queue)) {
                    printf("Очередь пуста.\n");
                } else {
                    printf("Очередь не пуста.\n");
                }
                break;
            case 5:
                printf("Выход...\n");
                return 0;
            default:
                printf("Неверная команда!\n");
                break;
        }
    }
}