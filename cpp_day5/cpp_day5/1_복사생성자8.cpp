#include <iostream>
#include <string>

int mani() {
	std::string s1("hello");
	std::string s2 = s1; // ���� ����
						// ���ڿ��� ���� �޸� ��ü ����

	std::string s3("hello");
	std::string s4 = std::move(s3); // s2�� ����ϴ� �ڿ�(�޸�)�� ������� ��(�̵�)

	std::cout << s3 << std::endl; // �� ���ڿ�(�ڿ� ����)
	std::cout << s4 << std::endl; // "hello
}

//�Ʒ� �ڵ�� move semantics��� �Ѵ�.
// std::string s4 = std::move(s3);