#include <iostream>
#include <string>

int mani() {
	std::string s1("hello");
	std::string s2 = s1; // 깊은 복사
						// 문자열을 가진 메모리 자체 복사

	std::string s3("hello");
	std::string s4 = std::move(s3); // s2가 사용하던 자원(메모리)를 뺏어오는 것(이동)

	std::cout << s3 << std::endl; // 빈 문자열(자원 뺏김)
	std::cout << s4 << std::endl; // "hello
}

//아래 코드는 move semantics라고 한다.
// std::string s4 = std::move(s3);