// 5_this2 -126page
// python의 self 와 비슷.

#include <iostream>

class Point {
	int x, y;
public:

	void set(int a, int b) {  // void set(Point* this, int a, int b)

		x = a;		
		y = b;			
		// 멤버함수 안에서 this라는 키워드를 사용할 수 있다.
		// 자신을 호출할때 사용한 객체의 주소가 들어있다.
		std::cout << this << std::endl; // p1을 불렀을 떈 p1의 주소(&p1), p2를 불렀을 땐 p2의 주소(&p2)가 출력
	}
};

int main() {
	Point p1;
	Point p2;

	p1.set(10, 20); 
	p2.set(10, 20);

	std::cout << "&p1: " << &p1 << std::endl;
	std::cout << "&p2: " << &p2 << std::endl;
}