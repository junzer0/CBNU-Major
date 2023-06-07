### 8. Switching

### 8.1 Switched network
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/1ce70429-e24f-4f47-8a96-9cb1a8ac3997)
- Switching의 세 가지 방법
  - Circuit switching -> 사용됨(전용선, 요즘 사용x)
  - Packet switching -> 사용됨(패킷 형태로 잘려서 운반, 전용 루트 x)
    - Virtual circuit approach (패킷망을 circuit망 처럼 사용, 일부러 루트를 고정, 품질보장시 사용)
    - Datagram approach
  - Message switching -> 사라짐
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/2f0d42f0-a6ad-4b0a-925b-6ae8be6f60dd)

### 8-2 Circuit-Switched Networks
- 물리적인 링크로 연결된 switch들의 집합
- 두 station 사이는 링크는 1개 이상의 전용 경로로 연결됨
- 각각의 연결은 링크의 전용 채널을 사용함
- FDM 또는 TDM으로 링크를 n개의 채널로 분할함
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/24c22013-8fe6-46ca-9cb7-3c5869ddcc1a)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/57b66ee9-e2f9-4d47-bae2-5ea2775506c5)

- 실제 circuit-switched network의 통신은 **3단계**로 이루어진다
  - **Connection setup**
  - **Data transfer**
  - **Connection teardown**

- Circuit Switched Networks 장단점
  - 장점 : Delay가 최소화된다.
  - 단점 : 연결 기간 내내 자원이 사용된다.
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/fa91215a-4e87-4efa-9be6-9968bc270c34)

### 8-3 Packet Switching
- 데이터 통신에서 시스템의 한 쪽 끝에서 다른 끝으로 메시지를 전달하는 경우
- 패킷 교환 망을 메시지가 통과하는 경우 메시지를 패킷으로 분할할 필요가 있다
- 패킷의 크기는 네트워크와 사용하는 프로토콜에 따라서 결정된다

- Datagram 망
  - 각 패킷은 다른 패킷과 독립적으로 다루어진다
  - 이 때 패킷을 datagram이라 한다
  - 보통 네트워크 계층에서 이루어진다

- ex) Station A에서 X로 4개의 패킷을 전송
  - 이 때 switch를 통상 router(라우터)라 한다
  - 각각의 패킷을 라우터는 독립적으로 처리한다
  - 패킷 사이의 시간간격, 도착순서 일정하지 않다
  - 상위 layer에서 재정돈 및 재전송 요구
  
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/c36857f9-d01d-4e4e-9f3c-2712ea37bef1)

