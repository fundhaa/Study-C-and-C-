#include <iostream>

class Camera {
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera {
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People {
public:
	void useCamera(Camera* p) { p->take(); }
}; // 하나의 클래스가 다른 클래스를 사용시 클래스 이름을 직접 사용 => 강한 결합(확장성이 없는 디자인)

int main() {
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc); // 이걸 하려면 people 클래스에 HDCamera를 입력으로 받는 함수를 넣어줘야한다.
						// HDCamera가 나와도 함수를 수정 안하게 해야 OCP를 만족하는데 이건 OCP를 만족하지 못하는 코드이다.
}