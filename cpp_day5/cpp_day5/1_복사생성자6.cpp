#include <iostream>
#include <cstring>
#include <string>

// 얕은 복사(shallow copy) vs 깊은 복사(deep copy)
// ==> 클래스 내부에 포인터 멤버가 있는 경우만 고려하면 된다.
// ==> 포인터 멤버가 없는 클래스(Point 등)는 " 컴파일러가 제공한 복사 생성자 " 사용하면 된다.

// 문자열이 필요하면, char*, char[]가 아니라 std::string 쓰면 된다.

// 컴파일러가 만들어주는 디폴트 복사생성자는 모든 멤버에 대해 깊은 복사를 수행한다(X)
//  ==> 얕은 복사만 수행한다.
class People {
	//char* name;
	std::string name;
	int age;
public:
	People(const std::string& s, int a) : name(s), age(a)
	{
	}
	//~People() { delete[] name; } // 내가 자원할당 한적이 없기 때문에 소멸자도 쓸 필요가 없다.
};
int main() {
	People p1("Ha", 28);
	People p2 = p1; 
}