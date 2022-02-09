//9_기본파라미터.cpp

#include <iostream>
using namespace std;

// Default Parameter
// : 함수에서 전달된 인자가 없을 경우, 기본값을 사용할 수 있다.
// 1) 반드시 뒤에 있는 파라미터부터 기본값을 지정해야한다.
//    아래의 경우 a=0, c=0 이런식으로는 지정 불가능
//    void add(int a =0, int b)  :   ERROR!!
// 
// 2) 기본 파라미터 값은 함수의 선언과 구현이 분리된 경우. "선언부"에 작성해야한다.
int add(int a, int b, int c /*= 0*/, int d/* = 0*/) {
	return a + b + c + d;
}

int add(int a, int b, int c = 0, int d = 0)

int main()
{
	cout << add(10, 20) << endl;
	int result = add(10, 20); // add(10, 20, 0, 0)
	cout << result << endl;

	result = add(10, 20, 30); // add (10, 20, 30, 0)
	cout << result << endl;
}