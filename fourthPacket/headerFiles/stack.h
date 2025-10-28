#ifndef STACK_H
#define STACH_H

#include <stdbool.h>

typedef struct Node {//имя структуре: "struct Node"
    int data;
    struct Node *next;
} Node;

typedef struct {//структура без имени
    Node *top;
    int size;
} Stack;

void init(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
void print(Stack *s);
bool is_empty(Stack *s);

#endif