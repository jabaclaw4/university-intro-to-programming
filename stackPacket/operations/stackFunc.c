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
        printf("error\n");
        return;
    }
    new_node -> data = value; //присваиваем новому узлу значене которое нужно добавить в стек
    new_node -> next = s -> top;//присваиваем новому узлу указатель на узел который был вершиной раньше (до него)
    s -> top = new_node; //теперь вершина это новый узел
    s -> size++;//размер +1
}

bool is_empty(Stack *s){
    return s -> top == NULL;
}

int pop(Stack* s) {
    if (is_empty(s)) {
        printf("error, empty\n");
        return -1;
    }
    Node *temp = s->top; //запоминаем верхний узел адрес
    int value = temp->data; //сохраняем число
    s->top = temp->next; //обновляем веишину
    free(temp);//освобождаем верхний узел (который удалили/извлекли)
    s->size--;
    printf("Element %d removed from stack\n", value);
    return value;
}

void print(Stack* s) {
    if (is_empty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack (front -> tail): ");
    Node *current = s->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    printf("Size of stack: %d\n", s->size);
}

