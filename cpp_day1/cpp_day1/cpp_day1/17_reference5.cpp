#include <iostream>
using namespace std;

// reference type 
//		T& : lvalue reference type
//		- lvalue�� ������ �� �ִ�.
//	   TT& : rvalue reference type
//		- rvalue�� ������ �� �ִ�.
// const T& : const reference type
//		- lvalue / rvalue ��� ���� ����

// T n = 10; // T �� Ÿ��
// lvalue : ��ȣ �������� ���ʿ��� �� �� �ְ� �����ʿ��� �� �� �ִ� ��
// rvalue : ��ȣ �������� ���ʿ� �� �� ����, �����ʿ��� ��� ������ ��

int main() {
	int a = 10;
	// a�� lvalue
	// 10 �� rvalue

	const int& ca = a; // lvalue ����!
	const int& c = 10; // rvalue ����!

	int& a = ra = a; // ����
	int&& rra = a; // ERROR!  lvalue�� rvalue refenece ����ϸ� ������.

	int&& rr = 10; // ����
	int& r = 10; // ERROR! rvalue�� lvalue reference ����ϸ� ������.
}