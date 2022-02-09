//14_���� ��ȯ ����.cpp
#include <iostream>
using namespace std;

// C++11
// > �Լ��� ����� ���ο� ����� �����Ѵ�.
// : ������ȯ���� �Լ�
// C++ : auto fn(int a, int b) -> int
// Kotlin : fun fn(a: Int, b: Int) : Int
// Swift : func fn(a: Int, b: Int) -> Int

//�������� �Լ��� ����
// int : ��ȯŸ��, int a, int b : �Ķ����, return a+b : ��ȯ��
// ������ ��ȯŸ���� ������ �Լ��� ǥ���ϴ� ������� �ִ�.
int add(int a, int b) { return a + b; } // 1��

// 
auto add(int a, int b) -> int { return a + b; } // 2�� : ������ȯ����

//int (*foo())(int, int)//1��
auto foo() -> int(*)(int,int) // 2�� : ������ȯ����
{
	return &add; // int(*)(int, int)
}

int main() {

}