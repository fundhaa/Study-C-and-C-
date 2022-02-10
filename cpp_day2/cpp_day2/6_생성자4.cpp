// 5_셍성자3-78 page

#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect {
	Point leftTop;
	Point rightBottom;
public :
	Rect() {
		std::cout << "Rect()" << std::endl;
	}
};
int main() {
	Rect r; // 출력결과는?

	// 생성자 호출 순서 : Point leftTop, Point rightBottom, Rect r
	// 멤버의 생성자가 먼저 호출되고, Rect 자체의 생성자가 호출된다.
}