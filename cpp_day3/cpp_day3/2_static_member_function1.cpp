// 2_static_member_function1 - 110 page
#include <iostream>

class Car
{
	int color; // "instance member" 라고도 한다.
	static int cnt;
public:
	// int cnt = 0; // 객체당 한개씩 생성
	Car() { ++cnt; }
	~Car() { --cnt; }

	//int getCount() { return cnt; } // 객체가 있어야만 호출 가능, 메모리에 있지만 불러오지는 못한다.
	static int getCount() { return cnt; } // 객체가 없어도 호출 가능한 함수
											// "클래스이름::함수이름" 으로 호출
};

int Car::cnt = 0; // Car가 사용하는 cnt 변수이고 0으로 초기화가 되어있다.


int main() {

	// 여기서 자동차의 갯수를 알고 싶다는 말은,
	// => Car::cnt는 객체가 없어도 메모리에 있으므로 읽어올 수 있어야 한다.
	std::cout << Car::getCount() << std::endl; // 0

	Car c1;
	Car c2;

	//std::cout << Car::cnt << std::endl; // cnt가 private 멤버로 들어갔으므로 ERROR
	std::cout << c1.getCount() << std::endl; // 정상이지만 아래 코드가 좋다.
	std::cout << Car::getCount() << std::endl; // 클래스이름::함수이름 이렇게 사용하는걸 권장
}