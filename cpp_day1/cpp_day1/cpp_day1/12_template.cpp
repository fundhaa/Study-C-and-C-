#include <iostream>
using namespace std;

// 타입이 다르기 때문에 오버로딩이 가능하다.
/*
int square(int n) { return n * n; }
double square(double n) { return n * n; }
short square(short n) { return n * n; }
// 리턴 타입과 파라미터 타입만 다르고 알고리즘(구현)이 모두 동일하다.
*/

template <typename T>
T square(T n) { return n * n; }
// 템플릿 함수
// -> 컴파일러가 함수의 호출을 기반으로 T의 타입을 결정해서 코드를 자동으로 생성한다.
// : 호출된 타입에 의해 코드가 생성되기 때문에, 코드 메모리 사용량 증가가 발생할 수 있다.
// => Template / Generic

template <typename T1, typename T2>
void foo(T1 a, T2 b) {}

int main() {
	foo(10, 3.14); // foo(int, double);
	foo('A', 42); // foo(char, int);

	int n = 10;
	double d = 3.14;
	short s = 25;

	square(n); // square(int)
	square(d); // square(double)
	square(s); // square(short)
	double k = square(2.6);
	cout << k << endl;
}