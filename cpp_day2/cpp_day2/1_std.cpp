// 1_std.cpp
#include <iostream>
//using namespace std;

int count = 0;

int main() {
	int n = count;  // C++ 표준에 "std::count()" 라는 함수가 있다.
					// 따라서 count라고 적으면 컴파일러가 표준에 있는 함수인지, 우리가 적은 전역변수인지 헷갈린다.(ambigous)
					// using namespace std; 이거 주석처리하면 문제 해결 가능
					// 실무에서는 쓰면 위험하다. 이름 충돌의 가능성이 항상 존재하기 때문!

	std::cout << "aa " << std::endl;
}

// 컴파일하면 에러가 발생한다.
// 왜 에러일까?
