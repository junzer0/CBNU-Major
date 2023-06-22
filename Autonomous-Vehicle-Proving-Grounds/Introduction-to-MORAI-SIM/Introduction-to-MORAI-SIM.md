# MORAI SIM 소개 및 사용법

## 기본조작법
### Keyboard Short Cut
- F4 or Help -> Guide
- 키보드에 설정된 단축키 확인
- Control, Gear, UI, Etc 4가지 분류로 구성

### 차량 제어 모드
- Ego 차량 제어 모드 변경
  - 최초 진입시 상태는 키보드 모드
  - Q키를 통해 차량 제어 방식 변경 가능

- Ego 차량 AutoMode 제어
  - Keyboard 제어 불가
  - 구축된 코드가 ROS를 통해 시뮬레이터와 데이터를 주고 받음
  - 시뮬레이터로부터 인지 데이터를 받아 코드에 의해 판단 및 제어 데이터를 생성함
  - 시뮬레이터의 차량으로 메세지를 전달하여 자동적으로 제어가 이루어짐
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/6fb17d3d-e998-48cb-a142-fef1aa52184d)

### Ego 차량 소환 위치
- Ego 차량 위치 초기화
  - 키보드 I 키를 통해 차량을 초기 위치로 이동
- Ego 차량 초기화 위치 변경
  - Edit > Map Init Settings > Edit Init Ego State로 진입하여 Initial Ego State 설정
  - Dummy Car 소환
  - Adjustment 통해 위치와 방향 설정 가능
    - Mouse Left 클릭 후 드래그로 사용
  - 세팅 정보를 저장할 파일 이름 설정
  - 세이브 후 로드
