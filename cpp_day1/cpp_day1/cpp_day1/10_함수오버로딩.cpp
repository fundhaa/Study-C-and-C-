// 10_함수 오버로딩.cpp
#include <iostream>
using namespace std;

int square_int(int a) {
	return a * a;
}

double square_double(double d) {
	return d * d;
}

// 1. C는 동일한 이름을 가지는 함수를 여러개 만드는 것이 불가능하다.
// => square_int(int)
//    square_double(double)
// 2, C++은 파라미터의 타입과 개수의 정보가 다르면 동일한 이름의 함수를 제공할 수 있다
//  => 함수 오버로딩

int sqaure(int a) { return a * a; }
double square(double d) { return d * d; }

int main()
{
	cout << square_int(2) << endl;
	cout << square_double(3.14) << endl;

	cout << square(2) << endl; // square(int)
	cout << square(3.14) << endl; // square(double)
	// 컴파일러가 파라미터를 보고 알아서 함수를 연결시켜준다.
}