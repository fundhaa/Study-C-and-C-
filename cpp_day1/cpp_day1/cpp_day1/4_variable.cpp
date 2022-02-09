// 4_variable.cpp
#include <iostream>
using namespace std;

// C언어 구조체
/*
struct Point {
	int x;
	int y;
};

typedef struct Point POINT;

int main() {

	POINT pt; // 타입 앨리어싱
	struct Point point1;
	struct Point point2 = { 0. 0 };  // x=0, y=0으로 초기화
	struct Point point3 = { .x = 0, .y = 0 }; // 변수별로 0, 0으로 초기화

	printf("%d %d\n", point2.x, point2.y);
}
*/

// C++ 구조체
// 1. 사용자 정의 타입 구조체에 대해서 struct를 생략 가능하다.
// C언어와 다르게 typedef 를 쓰지 않아도 생략 가능.

// 2. 구조체 멤버 데이터에 초기값을 지정할 수 있다. => C++11
struct Point {
	int x = 0;
	int y = 0;
};

int main() {
	Point point1;
	cout << point1.x << ", " << point1.y << endl; // 내부변수를 선언하지 않으면 쓰레기 값이 들어감.
}