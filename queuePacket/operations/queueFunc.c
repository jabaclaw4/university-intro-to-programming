#include "../headerFiles/queue.h"

void init(Queue* q) {
    q->front = NULL;
    q->tail = NULL;
    q->size = 0;
}

bool is_empty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("error\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL; //тк новый узел последний
    if (is_empty(q)) {
        q->front = new_node; //если очередь пустая то новый узел и голова и хвост
        q->tail = new_node;
    } else {
        q->tail->next = new_node; //конец очереди (нода) точнее ее указатель указывает на новую ноду
        q->tail = new_node;//теперь новая нода это хвост
    }
    q->size++;
    printf("Element %d added to queue\n", value);
}

int dequeue(Queue* q) {
    if (is_empty(q)) {
        printf("error, empty\n");
        return -1;
    }
    Node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;//начало очереди теперь указывает на следующий после первого узел
    if (is_empty(q)) { //если очередь пустая то есть удалили единственный элемент то хвост теперь указывает ни на что
        q->tail = NULL;
    }
    free(temp);//удаляем старый первый узел
    q->size--;
    printf("Element %d removed from queue\n", value);
    return value;
}

void print(Queue* q) {
    if (is_empty(q)) {
        printf("empty\n");
        return;
    }
    printf("Queue (front -> rear): ");
    Node* current = q->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;//каждый раз присваиваем узлу след указатель
    }
    printf("\n");
}

