// 5_using.cpp
#include <iostream>
using namespace std;

// using
// 1. namespace : using ���� / using ���þ�
// 2. Type aliasing
//		: C - typedef
//		1) typedef ���� �б� ����
//		2) typedef �� ���ø��� ���� ��Ī�� �Ұ����ϴ�.

//typedef int DWORD; // int��� �̸��� DWORD�� ���
using DWORD = int; // int��� �̸��� DWORD�� ���

////////////////////////////////////
// �Լ������Ϳ� typedef ���
// int (*)(int, int);
int add(int a, int b) { return a + b; }

typedef int (*FP)(int, int);

//int (*foo1())(int, int) 
FP foo1()
{
	return &add;
} // ���� �ΰ��� �ް� �����͸� ��ȯ�ϴ� �Լ�
////////////////////////////////////

////////////////////////////////////
// typedef ��� using ���
using FP = int (*)(int, int);
FP foo2()
{
	return &add;
}
////////////////////////////////////
int main() {
	DWORD n;
}
