// 반복자
#include <iostream>
#include <vector>
#include <list>

// std::vector<int>::iterator p1 이 문법은 아래처럼 구현되어 있다.
/*
namespace std {
	template<typename T>
	class vector {
	public:
		class iterator {
		};
	};
}
*/

int main() {
	//std::vector<int> c = { 1, 2, 3, 4, 5 }; // 연속된 메모리
	//std::list<int> c = { 1,2,3,4,5 };		// 떨어진 메모리
	
	int c[5] = { 1,2,3,4,5 };

	//auto p1 = c.begin(); 

	//1. 반복자의 정확한 타입
	// 다만 아래처럼 사용하면 컨테이너 변경시 좌변의 타입이 변경되어야하므로
	//std::vector<int>::iterator p1 = c.begin();
	//std::list<int>::iterator p1 = c.begin();

	// 이렇게 사용한다.
	auto p1 = c.begin(); // c가 배열이라면 error이다. 배열에는 멤버함수 사용할 수 없다.

	//반복자를 꺼내는 최선의 코드는 이것이다.
	auto p1 = std::begin(c); // C가 STL 컨테이너건, raw 배열이건 모두 잘 동작한다.
}