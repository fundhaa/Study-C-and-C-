#include <iostream>
using namespace std;

// 1. �ζ��� ������ ������ ����ȭ �����̴�.
//      => MSVC/Obi
// 2. �Լ��� ȣ���ϴ� ���� �ƴ϶�, ���� �ڵ带 ġȯ�Ѵ�.
//      => ȣ���� ������尡 �������� �ʴ´�.
// ������������ �ڵ�޸𸮿� ���� ��뷮�� ������ �� �ִ�.

inline int add(int a, int b) { return a + b; }
//ȣ������ �ʰ� ���� ġȯ�� �� �ִ�. - inline �Լ�( ȣ���� �ƴ϶� ġȯ�ؼ� ���� )

int main() {
	int result = add(10, 20); //call add
	cout << result << endl;
}