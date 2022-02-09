#include <iostream>
using namespace std;

// 1. 인라인 문법은 컴파일 최적화 문법이다.
//      => MSVC/Obi
// 2. 함수를 호출하는 것이 아니라, 기계어 코드를 치환한다.
//      => 호출의 오버헤드가 존재하지 않는다.
// 빠르긴하지만 코드메모리에 대한 사용량이 증가할 수 있다.

inline int add(int a, int b) { return a + b; }
//호출하지 않고 기계어 치환할 수 있다. - inline 함수( 호출이 아니라 치환해서 동작 )

int main() {
	int result = add(10, 20); //call add
	cout << result << endl;
}