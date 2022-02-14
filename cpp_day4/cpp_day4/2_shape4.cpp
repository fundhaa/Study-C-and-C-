// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. �簢�� ���� �� ��ǥ 4�� �޴� �ͺ���, ��ǥ �ΰ��� ������ �ǵ���
// ��� ������ Ÿ������ �����ϸ� ���ϴ�.

// 2. ������ ��� Ŭ������ �ִٸ� ��� ������ ��� ������ �� �ִ�.
// class Shape ����� �� Ŭ���� �ڿ� : public Shape �߰�(���)

// 3. ��� ������ ������ Ư¡�� �ִٸ�(draw �Լ�)
// �� Ư¡�� �ݵ�� ��� Ŭ�������� �־���Ѵ�.
// �׷��� Shape* �� ��� ������ ��� ����� �� �ش� Ư¡�� ����� �� �ִ�.

// 4. ��� Ŭ������ ���� �Լ� �߿��� "�Ļ� Ŭ������ ������(override)�ϰ� �Ǵ� �Լ�"��
// �ݵ�� �����Լ��� �ؾ��Ѵ�.(�������� �׷����Ѵ�)
// Shape Ŭ������ draw�� virtual �߰�
// ��� Ŭ�������� virtual �ٿ��� �Ǳ� ������
// �������� ���� ���Ŭ�������� virtual�� �ٿ��ִ°� ����.

class Shape {
	int color;
public:
	virtual void draw() { std::cout << "Draw shape" << std::endl; }

	// �Ʒ� �Լ��� virtual�� �ٿ����ϴ°�?
	// setColor �Լ��� �Ļ� Ŭ������ ������ �� ���� ����. ���� �ʿ� ����.
	void setColoc(int c) { color = c; };

	// ��� ������ ������ ���� �� ������(������ Ư¡)
	// ���ϴ� ������ �ٸ���. (override �ʿ�)
	// �׷��� �� �Լ��� �ݵ�� virtual �� �ٿ��� �����Լ��� �������Ѵ�.
	virtual int getArear() const { return 0; }
};

class Rect : public Shape {
	//int x, y, v, h; // ���������
public:
	// Rect(); // ������
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) {
			Rect rc;
			Rect* p = new Rect;
			v.push_back(p);
		}
		else if (cmd == 2) {
			v.push_back(new Circle);
		}
		else if (cmd == 9) {
			for (auto p : v)
				p->draw();
		}
	}
}