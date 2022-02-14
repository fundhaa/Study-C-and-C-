// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. 사각형 만들 때 좌표 4개 받는 것보다, 좌표 두개만 받으면 되듯이
// 모든 도형을 타입으로 설계하면 편하다.

// 2. 공통의 기반 클래스가 있다면 모든 도형을 묶어서 관리할 수 있다.
// class Shape 만들고 각 클래스 뒤에 : public Shape 추가(상속)

// 3. 모든 도형의 공통의 특징이 있다면(draw 함수)
// 그 특징은 반드시 기반 클래스에도 있어야한다.
// 그래야 Shape* 로 모든 도형을 묶어서 사용할 때 해당 특징을 사용할 수 있다.

// 4. 기반 클래스가 가진 함수 중에서 "파생 클래스가 재정의(override)하게 되는 함수"는
// 반드시 가상함수로 해야한다.(논리적으로 그래야한다)
// Shape 클래스의 draw에 virtual 추가
// 기반 클래스에만 virtual 붙여도 되긴 하지만
// 가독성을 위해 상속클래스에도 virtual을 붙여주는게 좋다.

class Shape {
	int color;
public:
	virtual void draw() { std::cout << "Draw shape" << std::endl; }

	// 아래 함수는 virtual을 붙여야하는가?
	// setColor 함수는 파생 클래스가 재정의 할 일이 없다. 붙일 필요 없다.
	void setColoc(int c) { color = c; };

	// 모든 도형은 면적을 구할 수 있지만(공통의 특징)
	// 구하는 공식은 다르다. (override 필요)
	// 그래서 이 함수는 반드시 virtual 을 붙여서 가상함수로 만들어야한다.
	virtual int getArear() const { return 0; }
};

class Rect : public Shape {
	//int x, y, v, h; // 멤버데이터
public:
	// Rect(); // 생성자
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
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
				p->draw();
		}
	}
}