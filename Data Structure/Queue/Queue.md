### 1. 큐의 이해 : 큐의 추상 자료형

- 스택과 비슷한 삽입과 삭제의 위치가 제한되어있는 유한 순서 리스트
- 큐는 뒤에서는 삽입만 하고, 앞에서는 삭제만 할 수 있는 구조
    - FIFO(First-In-First-Out)
     ![image](https://github.com/junzer0/CBNU-Major/assets/110384101/58b20b04-024f-4b5b-aa0a-3d658625e75b)
     ![image](https://github.com/junzer0/CBNU-Major/assets/110384101/f6f90d7e-0a18-4d57-a19d-0b4cc936d770)
     
- 큐의 연산
    - 삽입 : enQueue
    - 삭제 : deQueue
   
- 스택과 큐의 연산 비교
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/4576d3c5-756c-425d-a67f-58f887618148)

- 큐의 추상 자료형
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/6fc7431f-d8a8-4cf7-bb07-eb516b7c29b1)

### 2. 큐의 구현 : 순차자료구조를 이용한 큐의 구현

- 1차원 배열을 이용한 큐
    - 큐의 크기 = 배열의 크기
    - 변수 front : 저장된 첫 번째 원소의 인덱스 저장
    - 변수 rear : 저장된 마지막 원소의 인덱스 저장
- 상태 표현
    - 초기 상태 : front = rear = -1
    - 공백 상태 : front = rear
    - 포화 상태 : rear = n-1(n:배열의 크기, n-1: 배열의 마지막 인데스)
