// 1_��������� - 92oage
#include <iostream>

class Point {
public:
	int x, y;

	Point() : x(0), y(0) {} // 1�� ������ 
	Point(int a, int b) :x(a), y(b) {} // 2�� ������

	Point(const Point& p) : x(p.x), y(p.y); {
		std::cout << "Copy Constructor" < std::endl;
	}
};

void f1(Point p1) {} // Point p1 = pt1; ��������� ȣ��
void f2(Point& p2) {} // p2 �� ��ü�� �ƴ� ����, ��ü ������ �ƴϹǷ� ���� ������ ȣ�� �ȵ�,.

Point pt(1, 2);
Point f3() { return pt; }
Point& f4() { return pt; }

int main() {
	// ���� �����ڰ� ȣ��Ǵ� ��� 3����
	// 1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ �� ��
	Point pt1(1, 2);
	Point pt2(pt1); // ���� ������ ȣ��
	Point pt3 = pt1; // ���� ������ ȣ��

	// 2. �Լ��� ��ü�� call by value�� ���� ��
	f1(pt1); // ���� ������ ȣ��
	f2(pt1); // ���� ������ ȣ�� �ȵ�.

	// 3, �Լ��� ��ü�� return by value�� ��ȯ�� �� - �ӽ� ��ü ����
	f3(); // ���Ͽ� �ӽ� ��ü�� ���� �� ���� ������ ȣ��
	f4(); // ���� ��ȯ�� �ӽ� ��ü�� ������ �����Ƿ� ���� ������ ȣ�� X
}

// call by value�� ���Ǵ� ������ ��� : primitive Ÿ���� ���� ��
// user define Ÿ���� ���� call by value�� ����ϴ� ���� ������ ���� �ʴ�.
// ��, ���� ������ user type�� ���� ����ϴ� ��쵵 �ִ�.

// empty class : ��� �����Ͱ� ���� Ŭ����, ũ�Ⱑ 1�̴�.
class Sample {
public :
	void f1() {}
};
// �� Ŭ������ empty class�̴�. sizeof(Sample) = 1�̴�.
// empty class�� ���� ���� ��κ� call by value�� �Ѵ�.