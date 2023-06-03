// �迭�� �̿��Ͽ� ����ť�� ������ �ڵ�
#include <stdio.h> 
#define QUEUE_SIZE 10

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

void enqueue(int data)
{
    if ((rear + 1) % QUEUE_SIZE == front) {
        printf("ť�� á���ϴ�.\n");
    }
    else {
        // rear�� data �����ϴ� ����
        queue[rear] = data;
        rear = (rear + 1) % QUEUE_SIZE;
    }
}

int dequeue()
{
    if (rear == front) {
        printf("ť�� ������ϴ�.\n");
    }
    else {
        int data = queue[front];
        front = (front + 1) % QUEUE_SIZE;
        return data;
    }
}