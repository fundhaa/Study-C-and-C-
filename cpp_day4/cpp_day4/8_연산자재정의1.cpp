// 연산자재정의
#include <iostream>

class Point {
	int x;
	int y;
public :
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 점을 더한다고 했을 때 가장 보기 좋은 코드는??
	Point p3 = Add(p1, p2); // 1 C언어 스타일
	Point p4 = p1.Add(p2); // 2 JAVA 스타일
	Point p5 = p1 + p2; // 3 C++ 스타일
}
// 컴파일러가 "a+b"를 해석하는 방법
// 1. a, b가 모두 premitive 타입이라면 그냥 덧셈 수행
// 2. 둘 중 하나라도 user type이라면 아래의 규칙대로 실행
//         a.operator(+) b가 가능한지 확인
// 안되면  operator+(a, b)가 가능한지 확인, 안되면 에러
