// 5_this2 -126page
// python�� self �� ���.

#include <iostream>

class Point {
	int x, y;
public:

	void set(int a, int b) {  // void set(Point* this, int a, int b)

		x = a;		
		y = b;			
		// ����Լ� �ȿ��� this��� Ű���带 ����� �� �ִ�.
		// �ڽ��� ȣ���Ҷ� ����� ��ü�� �ּҰ� ����ִ�.
		std::cout << this << std::endl; // p1�� �ҷ��� �� p1�� �ּ�(&p1), p2�� �ҷ��� �� p2�� �ּ�(&p2)�� ���
	}
};

int main() {
	Point p1;
	Point p2;

	p1.set(10, 20); 
	p2.set(10, 20);

	std::cout << "&p1: " << &p1 << std::endl;
	std::cout << "&p2: " << &p2 << std::endl;
}