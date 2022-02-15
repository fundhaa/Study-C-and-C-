#include <iostream>
#include <cstring>

class People {
	char* name;
	int age;
public:
	People(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s);
	}
	~People() { delete[] name; } // 소멸자 맘들어서 메모리 해제

	// 깊은 복사(deep copy)를 구현한 복사 생성자
	People(const People& p) : age(p.age) // 포인터가 아닌 것은 초기화리스트에서 잘 복사해놓는다.
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사하면 된다.
		//age = p.age; <== 여기서 하지 말고, 초기화 리스트를 활용 / 생성자는 초기화리스트를 활용하는게 좋다.
		// 2. 포인터인 멤버는 포인터가 가리키는 메모리 자체를 복사해주어야한다.
		//   1) 먼저 포인터가 가리키는 메모리를 복사하고
		//   2) 그 메모리에 포인터가 가리키는 내용을 복사해준다.
		name = new char[strlen(p.name) + 1]; // 메모리 사이즈에 맞게 복사
		strcpy_s(name, strlen(p.name) + 1, p.name); // 메모리가 담고 있는 내용을 복사

	}
};
int main() {
	People p1("Ha", 28);
	People p2 = p1; // 이 코드 때문에 runtime error가 발생한다.
					// 교재 103p 위쪽 그림.
}