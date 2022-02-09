// foo.c

#include <stdio.h>

// 전역변수와 전역 함수는 다른 파일에서 접근이 가능하다.
// => external linkage
int n = 42;

void foo() {
	printf("foo\n");
}