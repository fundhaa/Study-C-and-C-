//5_this4 - 126page

#include <iostream>

class Point {
	int x, y;
public : 
	// this 활용 1. 멤버데이터 접근을 명확히 표기하고 싶을 때
	// this->x 는 멤버데이터임을 나타내기 위해 사용
	void set(int x, int y) {
		x = x; // 멤버데이터를 멤버데이터에 넣겠다는 의미
		this->x = x; // 함수인자를 멤버데이터에 넣겠다는 의미
		y = y;
		this->y = y;
	}
	// this 활용 2. this를 반환하는 함수.
	Point* foo() { return this; }
	Point goo() { return *this; }
};
int main() {
	Point p1;
	p1.set(10, 20);

	// 멤버 함수가 this를 반환하면 멤버함수호출을 연속적으로 할 수 있다.
	p1.foo()->foo()->foo()->foo()->foo();
	// (&p1)->foo() 얘의 반환값이 내 주소니까 화살표 연산자로 계속 부를 수 있다.
	
	p1.goo().goo().goo().goo().goo().goo();
	// 이건 역참조이므로 . 으로 계속 부를 수 있다.

	std::cout << "A" << "B" << "C" << "D" << "E"; // 이 원리가 위 코드이다.
	// cout.operator<<("A").operator<<("B") 처럼 된다.

}