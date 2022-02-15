// 6_알고리즘1 - 225 page

// 5_반복자
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::list<int> s = { 1, 2, 3, 4, 5 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// 컨테이너에서 3을 찾고 싶다.
	// 1. 객체지향 언어 방식
	// 장점 : 사용하기 쉽다.
	// 단점 : 모든 컨테이너에 find 멤버 함수를 만들어야 한다.
	s.find(3);

	// STL의 대부분의 주요 함수는 멤버가 아닌 일반함수로 제공된다.
	// find 와 같은 일반함수(템플릿)을 알고리즘이라고 한다.
	auto ret1 = std::find(s.begin(), s.end(), 3); // list에서 검색
	auto ret1 = std::find(v.begin(), v.end(), 3); // vectir에서 검색
	
	// 알고리즘 : 문제를 해결하는 방법이라는 일반적인 의미가 있지만
	//				STL에서는 find 같은 멤버가 아닌 일반함수를 의미한다.

}