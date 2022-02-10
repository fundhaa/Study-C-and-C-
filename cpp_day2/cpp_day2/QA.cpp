// 함수 인자 받는 방법
/*
1. 인자값을 변경하고 싶다 - out parameter
= > 포인터 : void inc(int* p) { ++(*p); }
= > 참도 :   void inc(int& r) { ++r; }

2. 인자값을 변경하지 않는 경우 - in parameter
 인자가
	primitive type 이면 : call by value			foo(int n)
	user define type이면 : const reference		foo(const Rect& r)
*/
// 구글에서 C++ core guideline 검색해보면 뜨는 첫번쨰 링크 참조

#include <iostream>
#include <typeinfo>
int main() {
	// 일반 배열. 배열의 이름 안에 크기 정보가 기록되어 있다.
	// x의 타입은 int[5]이다.
	int x[5] = { 1,2,3,4,5 };

	// p는 단지 포인터 변수
	// p의 타입은 int*이고 크기 정보는 없다.
	int* p = new int[5]{ 1, 2, 3, 4, 5 };

	std::cout << typeid(x).name() << std::endl; // int[5]
	std::cout << typeid(p).name() << std::endl; // int*

	// 새로운 for문은 일반배열은 가능, 동적 할당된 배열 p는 안된다.
	for (autu e : x) {
	}

	for (auto e : p) { // ERROR 크기를 모르기 때문에 어디까지 접근해야하는지 모른다.
	}
	delete[] p;
}