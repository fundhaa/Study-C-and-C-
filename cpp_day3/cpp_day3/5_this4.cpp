//5_this4 - 126page

#include <iostream>

class Point {
	int x, y;
public : 
	// this Ȱ�� 1. ��������� ������ ��Ȯ�� ǥ���ϰ� ���� ��
	// this->x �� ������������� ��Ÿ���� ���� ���
	void set(int x, int y) {
		x = x; // ��������͸� ��������Ϳ� �ְڴٴ� �ǹ�
		this->x = x; // �Լ����ڸ� ��������Ϳ� �ְڴٴ� �ǹ�
		y = y;
		this->y = y;
	}
	// this Ȱ�� 2. this�� ��ȯ�ϴ� �Լ�.
	Point* foo() { return this; }
	Point goo() { return *this; }
};
int main() {
	Point p1;
	p1.set(10, 20);

	// ��� �Լ��� this�� ��ȯ�ϸ� ����Լ�ȣ���� ���������� �� �� �ִ�.
	p1.foo()->foo()->foo()->foo()->foo();
	// (&p1)->foo() ���� ��ȯ���� �� �ּҴϱ� ȭ��ǥ �����ڷ� ��� �θ� �� �ִ�.
	
	p1.goo().goo().goo().goo().goo().goo();
	// �̰� �������̹Ƿ� . ���� ��� �θ� �� �ִ�.

	std::cout << "A" << "B" << "C" << "D" << "E"; // �� ������ �� �ڵ��̴�.
	// cout.operator<<("A").operator<<("B") ó�� �ȴ�.

}