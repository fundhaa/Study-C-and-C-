#include <iostream>
using namespace std;

// gcd : 최대공약수
// 정수타입에 대해서만 사용이 가능해아한다.
int gcd(int a, int b) {
	return b != 0 ? gcd(b, a % b) : a;
}

// double -> int : 암묵적인 변환이 수행된다.

// 방법 1. double 버전 함수에서 선언만 하고, 구현을 제공하지 않는다.
// 선언
//double gcd(double a, double b); // ERROR : LINKING
// 이렇게 선언만 제공하면 링킹 오류가 발생해서 실행파일을 생성할 수 없다.

// 방법 2. 함수삭제(delete function) - C++11
double gcd(double a, double b) = delete; // ERROR : COMPILE
// 컴파일 오류를 통해 문제의 원인을 파악하는 것이 쉽다.

int main()
{
	cout << gcd(12, 3) << endl;
	//cout << gcd(3.14, 2.5) << endl; // warning이 발생하고 의미없는 값이 나옴.
	// 따라서 double이 들어가면 오류가 나오게 해야함.
}