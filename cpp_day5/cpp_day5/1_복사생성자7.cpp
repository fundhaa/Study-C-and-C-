#include <iostream>
#include <string>

// std::string 은 결국 c++ 표준에 아래같은 클래스가 있는 것이다.
namespace std {
	class string {
		char* s;
		int size;
	public :
		string(const char* s){...} //구현 생략
		~string() {}

		string(const string& s) {
			// 깊은 복사로 구현되어 있다.
		}
	};
};

int mani() {
	std::string s1("hello");
	std::string s2 = s1; // 이 순간 string의 복사 생성자가
						// 깊은 복사로 구현되어 있는 것이다.
}