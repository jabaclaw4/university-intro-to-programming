#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;//начало очереди
    Node* tail;//конец очереди
    int size;
} Queue;

void init(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
void print(Queue* q);
bool is_empty(Queue* q);

#endif