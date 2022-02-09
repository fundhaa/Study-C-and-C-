// 5_using.cpp
#include <iostream>
using namespace std;

// using
// 1. namespace : using 선언 / using 지시어
// 2. Type aliasing
//		: C - typedef
//		1) typedef 보다 읽기 쉽다
//		2) typedef 는 템플릿에 대한 별칭이 불가능하다.

//typedef int DWORD; // int라는 이름을 DWORD로 사용
using DWORD = int; // int라는 이름을 DWORD로 사용

////////////////////////////////////
// 함수포인터에 typedef 사용
// int (*)(int, int);
int add(int a, int b) { return a + b; }

typedef int (*FP)(int, int);

//int (*foo1())(int, int) 
FP foo1()
{
	return &add;
} // 인자 두개를 받고 포인터를 반환하는 함수
////////////////////////////////////

////////////////////////////////////
// typedef 대신 using 사용
using FP = int (*)(int, int);
FP foo2()
{
	return &add;
}
////////////////////////////////////
int main() {
	DWORD n;
}
