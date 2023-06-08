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

- Virtual-circuit network (가상 회선 망)
    - 회선 교환 망과 데이터그램 망을 섞은 것
    - 이 둘의 특성을 모두 갖고 있다
      - 회선교환망처럼 추가적인 설정 및 해제 단계가 있다
      - 회선교환망처럼 자원이 설정단계에 할당되거나 필요에 따라 할당 된다
      - 데이터그램망처럼 헤더가 주소를 포함한다
      - 회선교환망처럼 연결 설정 후 모든 패킷을 같은 경로로 전송된다
      - 보통 데이터링크 계층에 구현된다
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/ad442309-ee27-4551-a9c5-3e58716344f4)

- 주소 지정
  - 전역주소 (global address)
    - 발신지 또는 목적지 식별
  - 지역주소(가상회선 식별자: virtual circuit identifier(VCI))
    - 스위치에서만 사용되는 작은 숫자
    - 두 개의 스위치 사이에서 사용된다
    - 스위치에 들어오는 프레임의 VCI와 나가는 프레임의 VCI는 서로 다르다
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/7f055dc3-9a94-401c-88c9-bd905757efda)

- 3 단계로 구성
  - 가상회선망은 설정, 데이터전송, 해제의 단계를 갖는다
    - 회선 교환망과 동일

- 데이터 전송 단계
  - 교환기는 해당 가상 회선의 내용을 표로 갖고 있다
    - 4개의 열로 구성됨
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/3a1726a7-d929-42db-bc89-cda0c3f994eb)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/6164d534-e746-4038-9625-7f9df01bdee3)

- 설정요청 단계
  - a. A가 교환기 1에 설정 프레임 전달
  - b. 교환기 1이 입력포트(1), 가용 VCI(14), 출력포트(3) 설정
  - c. 교환기 2가 동일한 작업 수행
  - d. 교환기 3이 동일한 작업 수행
  - e. B가 수신할 준비가 되었으면 VCI 설정
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/0f78401b-0855-4155-b22d-33ffd632775c)

- 확인응답
  - a. B가 교환기 3에 응답프레임 전달VCI는 77
  - b. 교환기 3이 교환기2에 응답  VCI는 22
  - c. 교환기 2가 동일한 작업 수행  VCI는 66 
  - d. 교환기 1이 A에 응답  VCI는 14
  - e. A 는 B로 보내는 VCI가 14임을 확인
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/343cae13-9996-4f37-a0c9-2a1a86acc5cb)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/52a41011-8b48-4346-a19e-3477d45dbcf7)

- 가상회선 망의 주된 용도 -> **WAN의 데이터 링크 교환 기술**

