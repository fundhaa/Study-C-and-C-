// 4_variable.cpp
#include <iostream>
using namespace std;

// C��� ����ü
/*
struct Point {
	int x;
	int y;
};

typedef struct Point POINT;

int main() {

	POINT pt; // Ÿ�� �ٸ����
	struct Point point1;
	struct Point point2 = { 0. 0 };  // x=0, y=0���� �ʱ�ȭ
	struct Point point3 = { .x = 0, .y = 0 }; // �������� 0, 0���� �ʱ�ȭ

	printf("%d %d\n", point2.x, point2.y);
}
*/

// C++ ����ü
// 1. ����� ���� Ÿ�� ����ü�� ���ؼ� struct�� ���� �����ϴ�.
// C���� �ٸ��� typedef �� ���� �ʾƵ� ���� ����.

// 2. ����ü ��� �����Ϳ� �ʱⰪ�� ������ �� �ִ�. => C++11
struct Point {
	int x = 0;
	int y = 0;
};

int main() {
	Point point1;
	cout << point1.x << ", " << point1.y << endl; // ���κ����� �������� ������ ������ ���� ��.
}