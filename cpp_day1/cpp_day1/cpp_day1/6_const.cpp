#include <iostream>
using namespace std;

// const
// - ������ Ÿ�� ���
// - ��Ÿ�� ���
// - 2�� ��ο��� �����ϴ� ����

// constexpr
// - ������ Ÿ�� ������� �����ϴ� ����

int main()
{
	const int n = 30; // ��� ���� ����� �ʱ�ȭ : ������ Ÿ�� ���
	// uniform initialization ��ĵ� ����
	const int n1 = { 40 };
	constexpr int n4 = { 50 };
	// n = 30; - ERROR!

	int n2;
	cin >> n2;

	// constexpr int n3 = {n2}; // ERROR!
	const int n3 = n2; // const�� �ʱⰪ ���������. �Է����൵ �ǰ� ������Է� �޾Ƽ� ó���ص� ��.
	// �������� ����� �ʱ�ȭ : �� Ÿ�� ���

	cout << n << endl;
	cout << n3 << endl;
}