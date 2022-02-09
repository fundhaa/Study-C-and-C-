#include <iostream>
using namespace std;

// Ÿ���� �ٸ��� ������ �����ε��� �����ϴ�.
/*
int square(int n) { return n * n; }
double square(double n) { return n * n; }
short square(short n) { return n * n; }
// ���� Ÿ�԰� �Ķ���� Ÿ�Ը� �ٸ��� �˰���(����)�� ��� �����ϴ�.
*/

template <typename T>
T square(T n) { return n * n; }
// ���ø� �Լ�
// -> �����Ϸ��� �Լ��� ȣ���� ������� T�� Ÿ���� �����ؼ� �ڵ带 �ڵ����� �����Ѵ�.
// : ȣ��� Ÿ�Կ� ���� �ڵ尡 �����Ǳ� ������, �ڵ� �޸� ��뷮 ������ �߻��� �� �ִ�.
// => Template / Generic

template <typename T1, typename T2>
void foo(T1 a, T2 b) {}

int main() {
	foo(10, 3.14); // foo(int, double);
	foo('A', 42); // foo(char, int);

	int n = 10;
	double d = 3.14;
	short s = 25;

	square(n); // square(int)
	square(d); // square(double)
	square(s); // square(short)
	double k = square(2.6);
	cout << k << endl;
}