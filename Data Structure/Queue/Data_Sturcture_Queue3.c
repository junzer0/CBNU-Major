// 연결 자료구조를 이용해 연결 큐 구현하기
#include <stdio.h>
#include <malloc.h>

typedef char element;	// 연결 큐 원소의 자료형을 char로 정의
typedef struct QNode {	// 연결 큐의 노드를 구조체로 정의
	element data;
	struct QNode* link;
} QNode;

typedef struct {		// 연결 큐에서 사용하는 포인터 front와 rear를 구조체로 정의
	QNode* front, * rear;
}; LQueueType;

// 공백 연결 큐를 생성하는 연산
LQueueType* createLinkedQueue() {
	LQueueType *LQ;
	LQ = (LQueueType *)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

// 연결 큐가 공백 상태인지 검사하는 연산
int isEmpty(LQueueType *LQ) {
	if (LQ->front == NULL) {
		printf("Linked Queue is empty!");
		return 1;
	}
	else return 0;
}

// 연결 큐의 rear에 원소를 삽입하는 연산
void enQueue(LQueueType *LQ, element item) {
	QNode *newNode = (QNode *)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;
}