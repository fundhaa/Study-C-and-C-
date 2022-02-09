// 2_namespace.cpp
// namespace 사용하는 방법 3가지
#include <iostream>

namespace Test {
	void foo() { std::cout << "foo" << std::endl; }
	int n = 100;
}

// 1. 전체 이름을 사용하는 방법 : 이름공간과 심볼의 이름을 명시
/*
int main() {
	Test::foo();
	std::cout << Test::n << std::endl;

	std::cout << "Hello, C++" << std::endl;
}
*/

// 2. using  선언
/*
using std::cout;
using std::endl;
using Test::foo;
using Test::n;

int main() {
	foo();
	cout << n << endl;
	cout << "Hello, C++" << endl;
}
*/

// 3. using 지시어(directive)
// 이렇게 하면 이름 충돌에 문제가 발생할 가능성이 있기 때문에 현업에서 사용하는걸 권장하지 않는다.
using namespace std;
using namespace Test;

int main() {
	foo();
	cout << n << endl;
	cout << "Hello, C++" << endl;
}
