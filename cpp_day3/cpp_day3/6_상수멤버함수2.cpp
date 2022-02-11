// �Ʒ� �ڵ��� ������ ã�Ƽ� �����غ���

class Rect {
	int x, y, w, h;
public :
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {	}

	// ��� ���������� ���� �ٲ��� �ʴ� �Լ��̴ϱ� �ڿ� const�� �ٿ���� �Ѵ�.
	// �Ӹ� �ƴ϶� ����Լ��� ���� �� ��ü�� ���¸� �������� �ʴ� ��� ����Լ���
	// ��� ����Լ��� �ؾ� �Ѵ�.
	// getter(���� ��� �ַ� get���� �����ϴ� ����Լ�)�� �ݵ�� �������Լ��� �Ǿ���Ѵ�.
	
	//int getArea() { return w * h; }
	int getArea() const { return w * h; }
};

//void foo(Rect r) // call by value : ���纻�� �����ϹǷ� �޸𸮸� ���� �����Ѵ�. user type�� ���� ���� ������� ����.
//void foo(Rect& r) // �ٵ� �̷��� �ϸ� ������ ������ �� �ֱ� ������
void foo(const Rect& r) // �̷��� const reference�� �ҷ��� �Ѵ�. �ٵ� �̷��� compule ERROR!
{						// const�� �ҷ����� ����Լ��� ȣ���� �� ��� rc.getArea() ���⼭ ������ ����.
	int n = r.getArea();
}

int main() {
	Rect rc(1, 1, 10, 10);
	int n = rc.getArea();
	foo(rc);
}