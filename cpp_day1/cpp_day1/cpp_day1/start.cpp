// Start.cpp

// Compile : Ctrl + F7
// Build : Ctrl + Shift + B
// Compule + Run : Ctrl + F5

// C++ 확장자
// cpp, cc, cxx, c++, cp ...

// 컴파일러
// - MSVC(Microsoft Visual C/C++ Compiler
// - GCC(GNU C/C++ Compiler)
// - clang(LLVM)

// C++ 표준
// - C++98/03 : C++ 1.0
// - C++11/14 : Modern C++ / C++ 2.0
// - C++17/20 :

// C++ 에서는 C 언어의 모든 기능을 사용할 수 있다.

/*
#include <stdio.h>

int main() {
	printf("Hello, C\n");
	return 0;
}
*/

#include <iostream>
// C++ 표준 입출력 헤더 파일
// 1. 헤더 파일의 확장자가 없는 경우가 많다
int main() {
	std::cout << "Hello, C++" << std::endl;
	//return 0; 0으로 끝나는 것은 온전히 동작해서 끝났음을 명시, 아니면 뭔가 문제가 있음을 체크
	// C++에서는 사용자가 이를 작성하지 않을시 자동으로 컴파일러가 return 0를 만들어준다.
}
