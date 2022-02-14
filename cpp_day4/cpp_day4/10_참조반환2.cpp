#include <iostream>

class Counter {
public:
	int value = 0;
	//void increment() {
	//Counter increment(){ // 리턴용 임시객체 생성(내 자신의 복사본)
	Counter& increment(){ // 리턴용 임시객체를 만들지 말라.
		++value;
		return *this;
	}
	~Counter() { std::cout << "~Counter()" << std::endl; }
};

int main() {
	Counter c;
	//c.increment();
	//c.increment();
	//c.increment();
	// 위 방법보다 아래 방법으로 선언하면 좀 간단하다.
	c.increment().increment().increment();
	std::cout << c.value << std::endl; // 1 나옴. 복사한 객체에서 1, 2, 3올라가고 복사된 객체는 소멸자때문에 다 지워진다.

}