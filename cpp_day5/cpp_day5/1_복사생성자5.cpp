#include <iostream>
#include <cstring>

class People {
	char* name;
	int age;
public:
	People(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s);
	}
	~People() { delete[] name; } // �Ҹ��� ���� �޸� ����

	// ���� ����(deep copy)�� ������ ���� ������
	People(const People& p) : age(p.age) // �����Ͱ� �ƴ� ���� �ʱ�ȭ����Ʈ���� �� �����س��´�.
	{
		// 1. �����Ͱ� �ƴ� ����� �׳� �����ϸ� �ȴ�.
		//age = p.age; <== ���⼭ ���� ����, �ʱ�ȭ ����Ʈ�� Ȱ�� / �����ڴ� �ʱ�ȭ����Ʈ�� Ȱ���ϴ°� ����.
		// 2. �������� ����� �����Ͱ� ����Ű�� �޸� ��ü�� �������־���Ѵ�.
		//   1) ���� �����Ͱ� ����Ű�� �޸𸮸� �����ϰ�
		//   2) �� �޸𸮿� �����Ͱ� ����Ű�� ������ �������ش�.
		name = new char[strlen(p.name) + 1]; // �޸� ����� �°� ����
		strcpy_s(name, strlen(p.name) + 1, p.name); // �޸𸮰� ��� �ִ� ������ ����

	}
};
int main() {
	People p1("Ha", 28);
	People p2 = p1; // �� �ڵ� ������ runtime error�� �߻��Ѵ�.
					// ���� 103p ���� �׸�.
}