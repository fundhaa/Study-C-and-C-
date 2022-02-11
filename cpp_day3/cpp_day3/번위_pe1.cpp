// pe1.cpp
#include <cstdio>

int g1 = 0x11223344;
int g2 = 0x99887766;

void foo() {
	int a = 0;
	printf("hello\n");
}

int main() {
	// stack 메모리에 4바이트 할당.하고 거기에 10을 넣으라는 기계어 코드 생성
	int n = 10;
	
	printf("hello\n");
	foo();
	// 아래 코드는 기계어 코드로 heap에 40byte를 잡고 그 주소를 스택에서 저 주소를 가르켜라 라고 저장됨.
	int* p = new int[10];
	delete[] p;
}			// 이 함수가 사용한 지역변수(스택에 있는)를 파괴하는 기계어 코드 생성
// 32bit(x86) release로 빌드

// 1. 컴파일
// 2. PEView 검색해서 PEView 다운
//  윈도우 실행 파일 구조를 PE-Portable Executable 이라고 한다.
// 3. PEView로 실행파일 열면 OK (cpp_day3/Release/cpp_day3.exe)
