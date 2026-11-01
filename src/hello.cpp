#include <cstdio>  //printf 를 쓰기 위한 준비
#include <cstdint> // uint32_t 를 쓰기 위한 준비

int main() {
    uint32_t inst = 0x00500093;  //0x = 16진수
    printf("inst = 0x%08x\n", inst); //%08x = 16진수 8자리
    printf("하위 7비트 = %u\n", inst & 0x7F); // &  = 비트 and 연산
    return 0;

}

//#include <cstdio> 는 printf, cstdint 크기가 정확한 정수 타입이 들어있는 상자. pritf 는 cout 대신 형식을 정해 출력 하는 함수로 16진수 8자리처럼 모양을 맞출 때 편함
// 왜 int 가 아니라 uint32_t 를 쓰는가  => 명령어는 숫자라기 보다 32칸짜리 비트 묶음 uint32_t는 정확히 32비트, 부호없음 이라는 의미라 맨 위 비트가 1ㄷ인 명령어도 꼬이지 않음
