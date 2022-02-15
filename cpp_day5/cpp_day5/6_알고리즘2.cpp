// 6_알고리즘1 - 225 page

// 5_반복자
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
	std::list<int> s = { 1, 2, 3, 4, 5 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// find는 [first, las)사이에서 선형검색이다.
	// last는 검색 대상이 아니다.
	auto ret1 = std::find(s.begin(), s.end(), 3); // list에서 검색

	// find의 반환값
	// 검색 실패시 : last 반환(find의 2번째 인자로 전달한 반복자)
	// 검색 성공시 : 요소가 있는 곳을 가리키는 반복자

	if (ret1 == s.end())
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << "검색 성공 : " << *ret1 << std::endl;
}