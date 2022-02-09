// 18_casting.cpp

#include <iostream>
using namespace std;

// C언어의 캐스팅이 필요한 이유
// 1) void* -> int *
// 2) 메모리를 재해석

// C언어 캐스팅의 문제점
// 1) 캐스팅의 목적을 분석하기 어렵다.
// 2) C++ 언어의 캐스팅은 실패하지 않는다. => 위험하다.

// C++ 캐스팅은 목적에 따라 4가지 캐스팅 연산자를 제공한다.
// - static_cast
// - reinterpret_cast
// - const_cast
// - dynamic_cast -> 특이한 case라 나중에 배움

int main()
{

	int x = 10;
	double* pd = (double*)&x;
	// 위험하다. 허용되지 않은 메모리 접근
	*pd = 3.14;

	// C: void*(void 포인터)를 다른 포인터 타입으로 변환하는 것을 암묵적으로 허용하지만,
	// C++은 허용하지 않는다.
	// -> 명시적인 캐스팅이 필요하다.
	// 따라서 아래 malloc 대신 (int*)malloc으로 써야한다.
	int* p = malloc(sizeof(int));

	int n = 0x12345678;
	char* pc = &n; // 이러면 에러남
	char* pc = (char*)&n; // 아렇게 써줘야함.

	printf("%x %x %x %x \n", pc[0], pc[1], pc[2], pc[3]);
}