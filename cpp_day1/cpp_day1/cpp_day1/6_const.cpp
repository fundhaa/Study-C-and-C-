#include <iostream>
using namespace std;

// const
// - 컴파일 타임 상수
// - 런타임 상수
// - 2개 모두에게 지정하는 문법

// constexpr
// - 컴파일 타임 상수에게 지정하는 문법

int main()
{
	const int n = 30; // 상수 값이 상수로 초기화 : 컴파일 타임 상수
	// uniform initialization 방식도 가능
	const int n1 = { 40 };
	constexpr int n4 = { 50 };
	// n = 30; - ERROR!

	int n2;
	cin >> n2;

	// constexpr int n3 = {n2}; // ERROR!
	const int n3 = n2; // const는 초기값 정해줘야함. 입력해줘도 되고 사용자입력 받아서 처리해도 됨.
	// 변수값이 상수로 초기화 : 런 타임 상수

	cout << n << endl;
	cout << n3 << endl;
}