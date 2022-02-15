// 5_반복자
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::list<int c = { 1, 2, 3, 4, 5 };
	// 핵심 1. past the end
	auto.p1 = c.begin();
	auto p2 = c.end(); // 마지막이 아닌 마지막 다음을 가리킨다.

	*p1 = 10; // 정상
	*p2 = 10; // ERROR. 마지막이 아닌 마지막 다음(할당되지 않은 주소)에 10을 넣게 된다.

	// p2는 아래와 같이 비교(==, !=)의 용도로만 사용해야한다.
	while (p1 != p2) {
		std::cout << *p1 << std::endl;
		++p1;
	}
}