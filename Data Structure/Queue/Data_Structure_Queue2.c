// 배열을 이용하여 원형큐를 구현한 코드
#include <stdio.h> 
#define QUEUE_SIZE 10

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

void enqueue(int data)
{
    if ((rear + 1) % QUEUE_SIZE == front) {
        printf("큐가 찼습니다.\n");
    }
    else {
        // rear에 data 삽입하는 연산
        queue[rear] = data;
        rear = (rear + 1) % QUEUE_SIZE;
    }
}

int dequeue()
{
    if (rear == front) {
        printf("큐가 비었습니다.\n");
    }
    else {
        int data = queue[front];
        front = (front + 1) % QUEUE_SIZE;
        return data;
    }
}