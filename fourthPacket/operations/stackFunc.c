#include "../headerFiles/stack.h"
#include <stdio.h>
#include "stdlib.h"

void init(Stack* s) {
    s -> top = NULL;
    s -> size = 0;
}

void push(Stack *s, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("error: не удалось выделить память!\n");
        return;
    }
    new_node -> data = value;
    new_node -> next = s -> top;
    s -> top = new_node;
    s -> size++;
}

bool is_empty(Stack *s){
    return s -> top == NULL;
}

int pop(Stack* s) {
    if (is_empty(s)) {
        printf("Ошибка: стек пуст!\n");
        return -1;
    }
    Node *temp = s->top; //запоминаем верхний узел адрес
    int value = temp->data; //сохраняем число
    s->top = temp->next; //обновляем веишину
    free(temp);
    s->size--;
    printf("Элемент %d извлечен из стека\n", value);
    return value;
}

void print(Stack* s) {
    if (is_empty(s)) {
        printf("Стек пуст\n");
        return;
    }
    printf("Стек (сверху вниз): ");
    Node *current = s->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    printf("Размер стека: %d\n", s->size);
}

