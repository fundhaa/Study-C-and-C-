//calc.c
#include <stdio.h>

// foo.c와 동일한 이름의 전역함수와 전역변수를 선언하면 충돌이 난다.
// 링킹에러 발생!
int n = 100;
void foo() {
	printf("calc foo");
}

// duplicate symbol '_foo'
// duplicate symbol '_n'
// => 심볼(이름) 충돌
// => C언어에서는 이름 충돌을 해결할 수 있는 문법이 제공되지 않는다.
// => 서로 다른 이름을 사용하도록 약속해야한다.
// C++은 namespace를 사용하여 이름 충돌을 해결할 수 있다.