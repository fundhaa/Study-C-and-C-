// 5_생성자2 - 78page

#include <iostream>

class Point {
	int x;
	int y;
public:

	Point() {
		x = 0;
		y = 0;
		std::cout << "Point()" << std::endl;
	}

	Point(int a, int b) {
		x = a;
		y = b;
		std::cout << "Point(int, int)" << std::endl;
	}
	// 소멸자 : 객체가 파괴될때 자동으로 호출되는 함수
	// 반환 타입이 없고 인자도 없다. 오직 한개만 만들 수 있다.
	~Point() {
		std::cout << "~Point()" << std::endl;
	}
};


int main() {
	Point pt; 
	Point pt2(1, 2);
	std::cout << "-------------" << std::endl;
} // <-- 이 지점에서 pt2, pt1이 파괴된다. 지역변수이므로 {} 벗어날때 파괴
  // 소멸자가 호출된다.
  // 나중에 만든게 먼저 파괴된다.
  // 소멸자는 필요한 경우에만 만들면 된다. 필요한 경우가 있다.