#include "../headerFiles/queue.h"

void init(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

bool is_empty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Ошибка: не удалось выделить память!\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;
    if (is_empty(q)) {
        q->front = new_node;
        q->tail = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = new_node;
    }
    q->size++;
    printf("Элемент %d добавлен в очередь.\n", value);
}

int dequeue(Queue* q) {
    if (is_empty(q)) {
        printf("Ошибка: очередь пуста!\n");
        return -1;
    }
    Node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->tail = NULL;
    }
    free(temp);
    q->size--;
    printf("Элемент %d удален из очереди.\n", value);
    return value;
}

void print(Queue* q) {
    if (is_empty(q)) {
        printf("Очередь пуста.\n");
        return;
    }
    printf("Очередь (начало -> конец): ");
    Node* current = q->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

