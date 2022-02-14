

// �߻�Ŭ���� : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� ������ �� ����.
// �ǵ� : Ư�� �Լ��� �ݵ�� ������ �����ϴ� ��.

class Shape {
public:
	virtual void draw() = 0; // ���� �����Լ�(pure virtual function)
							// ������ ���� =0 ���� ������ �����Լ�
	virtual ~Shape() {}
};

class Rect : public Shape {
public:
	// Shape�κ��� �������� ���� �����Լ��� draw()�� �����θ� �������� ������ Rect�� �߻�Ŭ�����̴�.
	virtual void draw() override {}
};

int main() {
	Shape s; // ERROR. �߻�Ŭ������ ��ü�� ���� �� ����.
	Shape* p; // ������ ������ ������ ����� ���� ������. 
	Rect r; // ERROR, Rect�� draw()�� �����ϸ� Error �ذ�
}