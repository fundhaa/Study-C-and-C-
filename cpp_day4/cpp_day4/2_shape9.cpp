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

// 6. Design Pattern : 1994�� 4���� �����Ͼ �� å�� �̸�
//						��� ������ ���¼ҽ����� �������� ����ϴ� ����� �̸��� �ο��� ��

// 7. Prototype ���� : ��ü�� ���纻�� ����� ���� �����Լ�(clone)�� ����� �ڵ忡 �ο��� �̸�.

class Shape {
	int color;
	int type;
public:
	virtual ~Shape() {} // ����Ҹ���
	// �����Լ� : �Ļ�Ŭ������ ���������� ������ ����Ʈ ������ �����ϰڴٴ� �ǹ�.
	// ���������Լ� : �Ļ�Ŭ�������� �ݵ�� �������Ѵٰ� �����ϴ� ��. ( �����Լ� = 0; )
	// draw�� ��� �Լ����� �ʿ��� �Լ��̹Ƿ� ���������Լ��� �����ؾ��Ѵ�.

	// ���� �����Լ��� �������� �Ļ� Ŭ���� �����ڵ��� ���Ѿ��ϴ� ��Ģ�� ��������.
	// ���� �߿����� ���� �Լ��� �����Լ���, optional�� �����ϰ� �ϴ°� ����.
	virtual void draw() = 0; //��� ������ draw�� ������ ��� �����ϴ°� ����.// { std::cout << "Draw shape" << std::endl; }
	void setColoc(int c) { color = c; };
	virtual int getArear() const { return 0; }

	virtual Shape* clone() = 0; // �츮 �ý��ۿ��� clone ���ϱ� �� ������ clone �����صֶ�.
	/*{
		Shape* p = new Shape;
		p->color = color;
		return p;
	}*/
};


class Rect : public Shape {

public:
	Rect() {
		type = 1;
	} // ������
	virtual void draw() override { std::cout << "Draw Rect" << std::endl; }
	virtual Shape* clone() override
	{
		Rect* p = new Rect;
		return p;
	}
};
};

class Circle : public Shape {
public:
	Circle() {
		type = 2;
	}
	virtual void draw() override { std::cout << "Draw Circle" << std::endl; }
	virtual Shape* clone() override
	{
		Circle* p = new Circle;
		return p;
	}
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		// �����غ� ���� 1. ��ü�� ������ OCP�� �����ϰ� �� �� ������?
		//					Triangle�� �߰��Ǿ �Ʒ� �ڵ尡 �������� �ʵ���!
		//						==> �߻����丮��� �Ҹ��� ������ �����ϸ� �ȴ�.

		// 2. Undo/Redo ����� �������� ��� �ұ�?
		//			==> �츮�� â�������� �������� �ʾƵ� �Ǵ°�,
		//				�� ����� ��κ� ������ �Ǿ��ְ� �Ϲ����� ������� ������ ���� ���̴�.
		//				Command ������ �����ϸ� �ȴ�.

		// C++ ������ ��ü���� ���α׷��� ������ ������ ����
		// �� ������ ������ �����ؾ��Ѵ�.
		// "�̷� ���� �̷��� �ڵ��Ѵ�" ��� �̸� �˷��� ���� �ڵ� ����� �н��� �� �ִ�.

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

			v.push_back(v[k]->clone());
		}
		else if (cmd == -1)
			break;
	}
	// ���� ���� new�� ���� ��ü �ı�
	for (auto p : v) {
		delete p;
	}
}