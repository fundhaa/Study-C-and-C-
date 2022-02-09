// namespace.cpp
#include <stdio.h>

// namespcae : 이름 충돌 문재를 해결하는 문법
// C++ 표준 라이브러리는 std 이름 공간에 약속되어 있다.
// 프로그램 각 요소를 관련된 요소끼리 그룹화할 수 있다.

//Audio.cpp
namespace Audio{
void init() { std::cout << "Audio init" << std::endl; }
}

//Video.cpp
namespace Video{
void init() { std::cout << "Video init" << std::endl; }
}

int main()
{
	Audio::init(); // 함수 이름이 init으로 같아도 namespace 사용으로 해결
	Video::init();
}