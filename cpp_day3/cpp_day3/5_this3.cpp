// 5_this3 -126page

#include <iostream>

class Point {
	int x, y;
public:
	// non-static ����Լ��� this�� �߰���
	void set(int a, int b) { // �����ϵǸ� void set(Point* this, int a, int b)
		x = a;
		y = b;
		std::cout << this << std::endl;
	}
	// static ��� �Լ��� this�� �߰����� ����
	static void foo(int a) { // �����ϵǸ� void foo(int a)
		std::cout << this << std::endl; // ERROR, static �Լ��� ��ü�� ������ �ȵǾ �޸𸮿� �ö� �ֱ� ������ this ��� �Ұ���
	}
};

int main() {
	Point p1;

	p1.set(10, 20); // �̰� ������ �Ǹ� set(&p1, 10, 20) �̷��� �ȴ�. this�� �߰��� �� �ִ� �Լ�
	Point::foo(10); // ��ü ���� ȣ�� ����, �� ������ �Ǿ �Ʒ�ó�� �ȴ�.
					// foo(10)   => this�� �߰��� �� ���� �Լ�
}