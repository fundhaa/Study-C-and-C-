// 2_static_member_data1 - 110 page
#include <iostream>

// 방법1. 멤버데이터 사용
// ==> 멤버 데이터는 객체당 한개씩 따로 만들어진다.
// ==> 객체의 갯수 파악 실패!
class Car
{
	int color;
public:
	int cnt = 0;

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main() {
	Car c1;
	Car c2;
	// 자동차가 몇대나 만들어졌는지 갯수를 파악하고 싶다.
	std::cout << c1.cnt << std::endl;

}