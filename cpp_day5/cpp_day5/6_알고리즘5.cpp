// 6_알고리즘1 - 225 page

// 5_반복자
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
	std::list<int> s = { 1, 2, 6, 7, 8, 3, 4, 5, 9, 10 };

	// replace 알고리즘은 주어진 구간에서 특정 요소를 교체하는 알고리즘이다.
	//std::replace(s.begin(), s.end(), 5, 0); // 5를 0으로 바꾸는 함수
	std::replace_if(s.begin(), s.end(), [](int n) { return n % 2 == 0; }, 0);

	for (auto e : s)
		std::cout << e << ", ";
	// 위 코드의 결과?
	// s.begin() ~ s.end()에서 짝수를 0으로 만들어봐라.
}