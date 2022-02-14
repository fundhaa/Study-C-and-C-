// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. 사각형 만들 때 좌표 4개 받는 것보다, 좌표 두개만 받으면 되듯이
// 모든 도형을 타입으로 설계하면 편하다.

// 2. 공통의 기반 클래스가 있다면 모든 도형을 묶어서 관리할 수 있다.
// class Shape 만들고 각 클래스 뒤에 : public Shape 추가(상속)
class Shape {

};

class Rect : public Shape {
	//int x, y, v, h; // 멤버데이터
public:
	// Rect(); // 생성자
	void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	void draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) {
			Rect rc; 
			Rect* p = new Rect;
			v.push_back(p);	
		} 
		else if (cmd == 2) {
			v.push_back(new Circle); 
		}
		else if (cmd == 9) {
			for (auto p : v)
				p->draw(); // ERROR!, p는 Shape*인데 Shape에는 draw함수가 없다.
							// 해결책 1. p를 Rect*나 Circle*로 캐스팅한다.
							//			=> ((Rect*)p)->draw() 처럼 해야하는데
							//				코드를 작성할 때 p가 가리키는 객체가 Rect인지 Circle인지 알 수 없다.
							// 해결책 2. Shape 안에도 draw가 있어야한다.
							// 결론 : Shape 안에도 draw가 있어야 한다.
		}
	}
}