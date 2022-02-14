#include <iostream>

class Shape {
public:
	// 1. 가상함수를 만들 때는 virtual을 붙여야한다.
	virtual void draw() {}
};

class Rect : public Shape {
public:
	// 2. 가상함수를 override할 때는 virtual을 붙여도 되고 안붙여도 되지만 가독성을 위해 붙이는게 낫다.
	 //virtual void draw() {}

	// 3. 가상함수 재 정의시 오타가 발생하면 에러가 아니라 새로운 가상함수라고 컴파일러가 판단한다.
	// 에러가 안나고 새로운 함수를 만들었다고 판단함.
	 //virtual void Draw() {}

	 // 4. 3번이 아주 많은 버그를 일으켜서 override 키워드를 만들었다.(C++11)
	 virtual void Draw() override {} // ERROR 
									// 내가 만드는게 새로운 함수가 아니라 기반클래스에 있는 함수를 override 한거니
									// 만약 기반클래스에 이런 함수가 없다면 에러를 내줘라 라는 의미
	 virtual void draw() override {} // 정상
};
// 결론 : 가상함수 재 정의시 되도록이면 override 키워드 넣어서 만들어라

int main() {

}