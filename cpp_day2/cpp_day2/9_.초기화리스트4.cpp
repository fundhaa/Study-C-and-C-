#include <iostream>

// �ٽ� : ����� ��������ͷ� �ִ� ���� �ݵ�� �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ�� �ؾ��Ѵ�.
class Object
{
	int a;
	int b;
	const int c; //	�ݵ�� �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ�� �ؾ��Ѵ�.
public:
	Object(int value) : a(0, b(b), c(value)) // �̷��� �ؾ� �����̴�.
	{
		// c = value; // ����� �ʱ�ȭ�� �ƴ� �����̴�. ERROR
	}
};
int main() {
	Object obj(10);
}