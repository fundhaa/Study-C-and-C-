#include <iostream>
using namespace std;

// gcd : �ִ�����
// ����Ÿ�Կ� ���ؼ��� ����� �����ؾ��Ѵ�.
int gcd(int a, int b) {
	return b != 0 ? gcd(b, a % b) : a;
}

// double -> int : �Ϲ����� ��ȯ�� ����ȴ�.

// ��� 1. double ���� �Լ����� ���� �ϰ�, ������ �������� �ʴ´�.
// ����
//double gcd(double a, double b); // ERROR : LINKING
// �̷��� ���� �����ϸ� ��ŷ ������ �߻��ؼ� ���������� ������ �� ����.

// ��� 2. �Լ�����(delete function) - C++11
double gcd(double a, double b) = delete; // ERROR : COMPILE
// ������ ������ ���� ������ ������ �ľ��ϴ� ���� ����.

int main()
{
	cout << gcd(12, 3) << endl;
	//cout << gcd(3.14, 2.5) << endl; // warning�� �߻��ϰ� �ǹ̾��� ���� ����.
	// ���� double�� ���� ������ ������ �ؾ���.
}