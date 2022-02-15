// 5_반복자
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::list<int c> = { 1, 2, 3, 4, 5 };

	// 컨테이너의 모든 요소를 열거하는 3가지 기술

	// 1. range-for (C++ 부터 지원). 가장 편하고 모든 컨테이너가 가능
	for (auto e : c)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 2, [] 연산자 사용. 연속된 메모리만 가능. vector는 되고 list 는 안됨
	for (int i = 0; i < c.size(); ++i) {
		std::cout << std::endl; // c[i]는 vector만 가능, list는 안됨.
	}
	std::cout << std::endl;

	// 3. 반복자 사용 ( 모든 컨테이너 가능 )
	auto p1 = c.begin();
	while (p != c.end()) {
		std::cout << *p1 << ", ";
		++p1;
	}
}