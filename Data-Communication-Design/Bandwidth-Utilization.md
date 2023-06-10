## 6.2  대역 확산 방식 (Spread Spectrum)
- 대역 확산 방식
  - 각 지국이 필요한 대역폭이 B이면 Bss>>B인 Bss 로 확산
  - 추가적인 정보를 표시할 수 있어 더 안전한 통신이 가능함
  - 확산 과정은 원래 신호와 독립적으로 진행
  - 확산 코드를 통하여 대역폭을 확산함
  - 대역 확산의 두 가지 기법
    - 주파수 뛰기 대역 확산 (FHSS, frequency hopping spread spectrum)
    - 직접 순열 대역 확산 (DSSS, direct sequence spread spectrum)
   ![image](https://github.com/junzer0/CBNU-Major/assets/110384101/fc5d2a04-6c09-4ccd-9d00-bca64bd998a3)
   
### 6.2.1 FHSS
- 주파수 뛰기 대역 확산 (frequency hopping spread spectrum)
  - M개의 서로 다른 반송파를 이용한다
  - 한 번에 하나의 반송파를 사용하고 전체적으로 M개의 반송파 사용

![image](https://github.com/junzer0/CBNU-Major/assets/110384101/f7a622a5-6c95-4794-9f86-5a91d154a46a)
- Pseudorandom code generator를 통하여 랜덤한 hopping pattern을 생성한다
- 패턴이 다양하고 hopping 주기가 짧다면 도청하기 어렵다
- 넓은 대역을 건너뛰면서 사용하므로 전파교란에도 강하다

![image](https://github.com/junzer0/CBNU-Major/assets/110384101/812f7063-5c5e-432f-bd56-28018efd67ca)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/a44a81b8-ada9-4860-bcad-d733db25ef1e)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/3f68b1e8-d672-48b1-b153-7237e7577ce3)

- **FHSS의 대역폭 공유**
  - **M개의 서로 다른 반송파를 사용한다면 최대 M개의 지국들을 다중화하여 사용할 수 있다**

### 6.2.2 DSSS
- 직접 순열 확산 방식 (Direct sequence spread spectrum)
  - 1bit의 데이터를 n bits (n chips)으로 확산한다
  - Chip rate는 데이터 전송률에 n 배이다
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/ff747ba2-13b8-4848-8548-a0bd87be6093)
![image](https://github.com/junzer0/CBNU-Major/assets/110384101/b29b19b4-3f3f-48d3-b9a9-e974a8896e1a)


