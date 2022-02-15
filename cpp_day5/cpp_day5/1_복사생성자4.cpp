#include <iostream>
#include <cstring>

//컴파일러가 제공하는 복사생성자에 문제가 있나?
//	=> Point 클래스는 그냥 사용하면 된다.

// 하지만, 일부 클래스에서는 문제가 될 수 있다. - 그래서 복사 생성자가 중요하다
// 102 page 내용 - 중요

// 클래스 내부에 "포인터 멤버가 있고, 메모리를 동적할당 하는 경우:
//	=> 컴파일러가 제공하는 복사 생성자는 메모리 자체가 아닌 주소만 복사하는 현상이 있다.
//	=> 얕은 복사라고 한다.
// 
// 개발자가 직접 복사생성자를 만들어서 해결해야한다.

// 클래스 멤버가 포인터일때 컴파일러가 복사생성자를 만들게 되면
// 같은 메모리를 가리키게 된다.
// 그럼 동일한 메모리를 두번 지우게 되기 때문에 에러가 난다.

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
};
int main() {
	People p1("Ha", 28);
	People p2 = p1; // 이 코드 때문에 runtime error가 발생한다.
					// 교재 103p 위쪽 그림.
}