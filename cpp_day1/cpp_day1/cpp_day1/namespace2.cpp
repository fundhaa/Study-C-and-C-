// 2_namespace.cpp
// namespace ����ϴ� ��� 3����
#include <iostream>

namespace Test {
	void foo() { std::cout << "foo" << std::endl; }
	int n = 100;
}

// 1. ��ü �̸��� ����ϴ� ��� : �̸������� �ɺ��� �̸��� ���
/*
int main() {
	Test::foo();
	std::cout << Test::n << std::endl;

	std::cout << "Hello, C++" << std::endl;
}
*/

// 2. using  ����
/*
using std::cout;
using std::endl;
using Test::foo;
using Test::n;

int main() {
	foo();
	cout << n << endl;
	cout << "Hello, C++" << endl;
}
*/

// 3. using ���þ�(directive)
// �̷��� �ϸ� �̸� �浹�� ������ �߻��� ���ɼ��� �ֱ� ������ �������� ����ϴ°� �������� �ʴ´�.
using namespace std;
using namespace Test;

int main() {
	foo();
	cout << n << endl;
	cout << "Hello, C++" << endl;
}
