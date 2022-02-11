// 2_static_member_data2 - 110 page
#include <iostream>

// 방법2. 전역변수 사용
// ==> 오직 한개만 있고, 모든 객체가 공유한다.
// ==> 객체의 갯수 파악 성공


int cnt = 0;

class Car
{
	int color;
public:

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main() {
	Car c1;
	Car c2;

	cnt = -10; // 사용자 실수
				// 전역변수 사용은 안전하지 않다. 어디서든 접근할 수 있기 때문,
				// private으로 보호하는 방법은??  ---> 3번으로

	// 자동차가 몇대나 만들어졌는지 갯수를 파악하고 싶다.
	std::cout << c1.cnt << std::endl; // 2

}