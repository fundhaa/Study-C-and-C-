#include <iostream>
using namespace std;

// reference type 
//		T& : lvalue reference type
//		- lvalue만 참조할 수 있다.
//	   TT& : rvalue reference type
//		- rvalue만 참조할 수 있다.
// const T& : const reference type
//		- lvalue / rvalue 모두 참조 가능

// T n = 10; // T 는 타입
// lvalue : 등호 기준으로 왼쪽에도 올 수 있고 오른쪽에도 올 수 있는 것
// rvalue : 등호 기준으로 왼쪽에 올 수 없고, 오른쪽에만 사용 가능한 것

int main() {
	int a = 10;
	// a는 lvalue
	// 10 은 rvalue

	const int& ca = a; // lvalue 정상!
	const int& c = 10; // rvalue 정상!

	int& a = ra = a; // 정상
	int&& rra = a; // ERROR!  lvalue에 rvalue refenece 사용하면 에러남.

	int&& rr = 10; // 정상
	int& r = 10; // ERROR! rvalue에 lvalue reference 사용하면 에러남.
}