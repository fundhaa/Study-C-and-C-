// 6_알고리즘1 - 225 page

// 5_반복자
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

/*
bool foo(int n) {
	return n % 3 == 0;
}
*/

int main() {
	std::list<int> s = { 1, 2, 6, 7, 8, 3, 4, 5, 9, 10 };

	// 주어진 구간에서 "3"을 검색
	auto ret1 = std::find(s.begin(), s.end(), 3); // list에서 검색

	// 주어진 구간에서 "처음 나오는 3의 배수"를 검색하고 싶다.
	// std::find : 값 검색
	// std::find_if : 조건 검색

	// 람다표현식, : 익명의 함수
	// => 함수이름(주소)를 전달해야하는 자리에 "함수 구현 자체를 전달" 하는 문법
	// [] : 람다 표현식이 시작됨을 알리는 기호
	//		"lambda introducer" 이라고 한다.
	auto ret2 = std::find_if(s.begin(), s.end(), [] (int n) { return n % 3 == 0;}); // s[0]부터 s[9]까지 순서대로 보내는데,
														// 처음 만나는 3의 배수에서 true를 리턴해야한다.

	std::cout << *ret2 << std::endl;

}