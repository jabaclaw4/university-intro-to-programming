#include "headerFiles/stack.h"
#include <stdio.h>

int main() {
    Stack my_stack;
    int choice, value;
    init(&my_stack);
    printf("=== Реализация стека ===\n");
    while (1) {
        printf("\n1. Добавить элемент (push)\n");
        printf("2. Удалить элемент (pop)\n");
        printf("3. Показать стек\n");
        printf("4. Проверить пустоту\n");
        printf("0. Выход\n");
        printf("Выберите команду: ");

        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Выход...\n");
                return 0;

            case 1:
                printf("Введите значение: ");
                scanf("%d", &value);
                push(&my_stack, value);
                break;

            case 2:
                value = pop(&my_stack);
                if (value != -1) {
                    printf("Элемент %d извлечен из стека.\n", value);
                }
                break;

            case 3:
                print(&my_stack);
                break;

            case 4:
                if (is_empty(&my_stack)) {
                    printf("Стек пуст.\n");
                } else {
                    printf("Стек не пуст.\n");
                }
                break;

            default:
                printf("Неверная команда!\n");
                break;
        }
    }
}