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
			int n = 0;
			// 사각형 생성
			Rect rc; // 블럭 {}(if 문) 벗어나면 바로 파괴됨.
			Rect* p = new Rect; // 이렇게 하면 직접 제거(delete)하기 전까지는 계속 사용 가능.
								// 하지만 p 자체는 지역변수 이므로 역시 {} 벗어나면 파괴된다.
								// 그래서, p가 파괴되기 전에 생성된 Rect 주소를 vector에 보관
			v.push_back(p);		// main 함수 끝날때까지 유효
		} // n은 파괴된다.
		else if (cmd == 2) {
			v.push_back(new Circle); // 위 코드는 이렇게도 구현 가능
		}
	}

}