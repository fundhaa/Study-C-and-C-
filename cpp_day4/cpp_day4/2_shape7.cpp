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

// 5. OCP (Open Close Principle) ���� ����� ��Ģ
//		��� Ȯ�忡�� �����ְ�(Open, ���߿� Ŭ������ �߰��Ǿ(triangle Ŭ������ �߰��Ǿ))
//		�ڵ� �������� �����ֵ���(Close, main �Լ��� ȣ���� ������ �ʿ䰡 ����)
//		������ �Ѵٴ� �̷�(Principle)
// ��ü ���� ������ 5��Ģ : SOLID (SRP, OCP, LSP, ISP, DIP)
// �������� OCP�� �����ϴ� ���� ���� �ڵ���Ÿ���̴�.


class Shape {
	int color;
	int type; // � �������� ��������
public:
	virtual void draw() { std::cout << "Draw shape" << std::endl; }
	void setColoc(int c) { color = c; };
	virtual int getArear() const { return 0; }

	// ��� ������ ���纻�� ���� �� �ִ� �����Լ��� ����
	// �̷� �����Լ��� ���� �����ϴ�.
	virtual Shape* clone()
	{
		Shape* p = new Shape;
		p->color = color; // �ڽŰ� ������ �����ϰ� ���̵��� ��� ����� ����
		return p;
	}
};
// Shape* p1 = new Shape;
// Shape* p2 = p1->clone(); // ���纻 ����

class Rect : public Shape {
	//int x, y, v, h; // ���������
public:
	Rect() {
		type = 1;
	} // ������
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
	virtual Shape* clone()
	{
		Rect* p = new Rect;
		// x, y, w, h�� ��� ����� �ڽŰ� �����ϰ� �����ϴ� �ڵ� �߰�
		return p;
	}
};
};

class Circle : public Shape {
public:
	Circle() {
		type = 2;
	}
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
	virtual Shape* clone()
	{
		Circle* p = new Circle;
		// ��� ����� �ڽŰ� �����ϰ� �����ϴ� �ڵ� �߰�
		return p;
	}
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
		else if (cmd == 8) {
			std::cout << "���° ���� ������ �����ұ�� >> ";
			int k;
			std::cin >> k;
			// k��° ���� ������ ���纻�� �����Ѵ�.
			v.push_back(v[k]->clone()); // ������
										// k��° Ÿ���� ������ ���纻 �����ϴ޶�� �ϸ�
										// ��ü�� ���� ������ �Լ��� ȣ��� (OCP�� ����)
			// C��� ���
			//switch (type) :
			//	case 1: v.push_back(new Rect); break;
			//	case 2: v.push_back(new Circle); break;
		}
	}
}