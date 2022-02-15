#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <unordered_set>

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 1, 2, 3, 4, 5 };

	// vector와 list 는 사용법이 거의 동일하다.

	v.push_back(10);
	s.push_back(10);

	int n1 = v.front(); // 첫번쨰 요소 값 얻기

	int n2 = s.front(); // 첫번쨰 요소 꺼내기 auto n2도 가능하다.
	auto p = s.begin(); // 반복자 꺼내기

	// 의도적으로 만든 차이점이 있다.
	v.push_front(10); // ERROR, 벡터는 전방 삽입이 불가능하다.
						// 연속된 메모리의 전방 삽입은 너무 오버헤드가 커서 만들지 않았다.
						// 다른 컨테이너를 사용하는 것이 좋다는 의도.
	s.push_front(10); // 전방 삽입 가능
	
}