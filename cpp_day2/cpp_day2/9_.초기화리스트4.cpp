#include <iostream>

// 핵심 : 상수가 멤버데이터로 있는 경우는 반드시 초기화 리스트를 통해 초기화를 해야한다.
class Object
{
	int a;
	int b;
	const int c; //	반드시 초기화 리스트를 통해 초기화를 해야한다.
public:
	Object(int value) : a(0, b(b), c(value)) // 이렇게 해야 정상이다.
	{
		// c = value; // 여기는 초기화가 아닌 대입이다. ERROR
	}
};
int main() {
	Object obj(10);
}