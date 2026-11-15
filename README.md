# riscv-sim

C++로 만드는 RISC-V RV32I 명령어 시뮬레이터 (진행 중)

## 목표
휴학 중 부족한 실습 경험을 키우기 위해 직접 rc32i 명령어 시뮬레이터 제작  (한두 문장: 왜 만드는지)

## 지금 되는 것
- 32비트 명령어(16진수)를 넣으면 opcode, rd, rs1, funct3 를 잘라서 출력 rs2 나 그 외 fucnt 도 가능

## 실행 방법
```
g++ -std=c++17 -Wall -o decode src/main.cpp
echo 00500093 | ./decode
```

## 결과 로그
```
(echo 00500093 | ./decode 출력을 붙여 넣기)
```
lsshu@cjlabtop:~/riscv-sim$ echo 00500093 | ./decode
inst  = 0x00500093
opcode = 0x13
rd =  x0

## 막혔던 문제와 해결
- ___
첫 회차라 크게 어려움 없이 해결

## AI 활용 기록
| 날짜 | AI에게 시킨 일 | AI가 틀리거나 애매했던 점 | 검증 방법 | 배운 점 |
|---|---|---|---|---|
| 2026-11-15 | 0x00C00513 해독 | ai 같은 경우 addi x10, x0, 12 를 li a0, 12 로도 쓴다고 했는데 rars 에서는 그렇게 쓰지 않음 | 내 decode 출력, RARS Code 칸  |일치 (rd x10, rs1 x0, funct3 0) / Code 0x00c00513 |  |