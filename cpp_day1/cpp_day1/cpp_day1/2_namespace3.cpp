#include <iostream>

// #include <stdio.h> // printf / scanf
// #include <stdlib.h> // malloc / free
// #include <string.h> // strcpy / strlen / strcat
// > C++에서 제공하는 C 헤더 파일이 별도로 존재

#include <cstdio>
#include <cstdlib>
#include <cstring>
//  C언어의 표준 라이브러리를 std 이름 공간으로 사용할 수 있다.

/* 이런 개념이다.
namespace std{
	#include <stdio.h>
}
*/

int main()
{
	std::cout << "Hello, C++" << std::endl;
	std::printf("Hello, C\n"); // cstdio

}