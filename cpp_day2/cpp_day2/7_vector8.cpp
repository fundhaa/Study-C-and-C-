#include <vector>
#include <iostream>

int main() {
	std::vector<int> v1(10; // 초기 크기 10개짜리
	std::vector<int> v2 = { 1,2,3,4,5 };

	// 1. 사용법은 배열과 동일 []연산자 사용
	v2[0] = 10;
	v2[1] = 29;

	// 2. 크기변경이 가능해서 배열보다 좋다.
	v2.resize(10);

	// 3. 편리한 멤버 함수가 많다.
	v2.push_back(3); // 끝에 한개 추가, 10개에서 한개 추가했으므로 11개크기

	std::cout << v2.size() << std::endl;
}

// C++ 배우기
// vector 같은 것을 만들어보기 - 약간 어려운 내용(초~중급)
// 표준에서 만들어준 vector를 사용하기 - 어렵지 않음(초급)