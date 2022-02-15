#include <iostream>

// 카메라와 사용자 사이에 지켜야하는 규칙을 먼저 설계(인터페이스)
// 규칙 : 모든 카메라는 아래 클래스로부터 파생되어야한다.

class ICamera
{
//	int color; // 추상클래스가 물려주는 것. 물려주는 것과 규칙이 있으면 추상클래스
				// 규칙만 있으면 인터페이스
public:
	virtual void take() = 0; // 모든 파생클래스들은 take를 사용해라 라는 규칙
	virtual ~ICamera() {} // 순수 가상 함수
};

// 아직 진짜 카메라는 없지만, 카메라를 사용하는 코드를 먼저 만들 수도 있다.
// 규칙대로만 사용하면 가능

// ICamera라는 추상클래스(인터페이스)를 사용했고
// People은 Camera class들을 직접 사용하지 않았으므로 
// 카메라가 추가되어도 코드를 바꾸지 않아도 된다.
// 
// 약한 결합
// 하나의 클래스가 다른 클래스 사용시 기반클래스인 추상클래스(인터페이스)를 통해서 사용하는 것
// 
// 용어 정리
// 인터페이스 : 모든 멤버가 순수 가상함수(규칙)만 있는 경우(오늘 배운 ICamera)
// 추상클래스 : 순수 가상함수 + 물려줄 다른 멤버들(어제 배운 Shape)

// 유연하고 확장성 있는 디자인을 위해서는 loosely coupling을 사용한다.(O)
class People {
public:
	void useCamera(ICamera* p) { p->take(); }
};

class Camera : public ICamera {
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera {
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};
class UHDCamera : public ICamera {
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};


int main() {
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc); // 이걸 하려면 people 클래스에 HDCamera를 입력으로 받는 함수를 넣어줘야한다.
						// HDCamera가 나와도 함수를 수정 안하게 해야 OCP를 만족하는데 이건 OCP를 만족하지 못하는 코드이다.
	UHDCamera uhc;
	p.useCamera(&uhc);
}