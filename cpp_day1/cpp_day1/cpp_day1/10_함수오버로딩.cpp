// 10_�Լ� �����ε�.cpp
#include <iostream>
using namespace std;

int square_int(int a) {
	return a * a;
}

double square_double(double d) {
	return d * d;
}

// 1. C�� ������ �̸��� ������ �Լ��� ������ ����� ���� �Ұ����ϴ�.
// => square_int(int)
//    square_double(double)
// 2, C++�� �Ķ������ Ÿ�԰� ������ ������ �ٸ��� ������ �̸��� �Լ��� ������ �� �ִ�
//  => �Լ� �����ε�

int sqaure(int a) { return a * a; }
double square(double d) { return d * d; }

int main()
{
	cout << square_int(2) << endl;
	cout << square_double(3.14) << endl;

	cout << square(2) << endl; // square(int)
	cout << square(3.14) << endl; // square(double)
	// �����Ϸ��� �Ķ���͸� ���� �˾Ƽ� �Լ��� ��������ش�.
}