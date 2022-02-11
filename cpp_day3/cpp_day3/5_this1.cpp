// 5_this1 -126page
// python�� self �� ���.

#include <iostream>

// 1. ��ü ������ ��� �����͸� ��ü�� �Ѱ��� �����ȴ�.
// 2. ��� �Լ��� �ڵ�޸𸮿� �Ѱ��� �ִ�.
class Point {
	int x, y;
public :
	// ����Լ��� �ᱹ ������ �Ǹ�
	// ù��° ���ڷ� ��ü�� �ּҸ� ���� �� �ְ� ����ȴ�.
	void set(int a, int b) { // ��ü�� � �ְǰ��� set�� �ڵ�޸𸮿� �ϳ� ����.
							// void set(Point* this, int a, int b)
		x = a;				// this-> = a;
		y = b;				// this-> = b;
	}
};

int main() {
	Point p1;
	Point p2;

	// set�Լ��� �ڵ�޸𸮿� �ϳ� �ִµ� ��� p1�� x���� p2�� x���� �ľ��ұ�?
	p1.set(10, 20); // set(&p1, 10, 20) ���� �����Ϸ��� �����Ѵ�.
	p2.set(10, 20); // set(&p2, 10, 20) ���� �����Ϸ��� �����Ѵ�.
	// �׷��� p1�� x, y�ּҿ� 10, 20 �Ҵ�����, p2�� x, y�ּҿ� 10, 20 �Ҵ����డ �����ϴ�.
}

// C++ : �����Ϸ��� ��� �Լ� ����
// void set(int a, int b) ==> void set(Point* this, int a, int b)

// ���̽� : �����ڰ� ���� this �� �ڵ��ض�
/*
class Point : 
	def __init__(self, a, b) : 
		self.x = a
		self.y = b
*/