#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int priority;
    struct node* next;
};

struct queue {
    struct node* front;
};

struct queue* createQueue() {
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = NULL;
    return q;
}

void enqueue(struct queue* q, int data, int priority) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    if (q->front == NULL || priority < q->front->priority) {
        newNode->next = q->front;
        q->front = newNode;
    } else {
        struct node* cur = q->front;
        while (cur->next != NULL && cur->next->priority <= priority) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

int dequeue(struct queue* q) {
    if (q->front == NULL) {
        return -1; // Queue is empty
    }

    struct node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    free(temp);

    return data;
}

void display(struct queue* q) {
    if (q->front == NULL) {
        printf("No devotees to worship.\n");
        return;
    }

    struct node* cur = q->front;
    printf("Remaining devotees: ");
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    struct queue* q = createQueue();
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int data, priority;
        scanf("%d %d", &data, &priority);
        enqueue(q, data, priority);
    }

    int maxData = -1;
    struct node* maxNode = NULL;
    struct node* cur = q->front;

    while (cur != NULL) {
        if (cur->data > maxData) {
            maxData = cur->data;
            maxNode = cur;
        }
        cur = cur->next;
    }

    if (maxNode != NULL) {
        if (maxNode == q->front) {
            q->front = q->front->next;
        } else {
            struct node* prev = q->front;
            while (prev->next != maxNode) {
                prev = prev->next;
            }
            prev->next = maxNode->next;
        }
        printf("Allowed for worship: %d\n", maxData);
        free(maxNode);
    }

    display(q);
    return 0;
}
