#include "1_Point.h"

// Ŭ���� ����ڴ� ������ϸ� �����ϸ� �ȴ�.

Point::Point(int a, int b) : x(a), y(b) {}
Point::~Point() {}

// �� �ǹ� : ���� �Ϲ��Լ��� �ƴ϶� Point Ŭ������ ����Լ��̴�.
void Point::set(int a, int b) {
	x = a;
	y = b;
}
