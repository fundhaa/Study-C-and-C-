// namespace.cpp
#include <stdio.h>

// namespcae : �̸� �浹 ���縦 �ذ��ϴ� ����
// C++ ǥ�� ���̺귯���� std �̸� ������ ��ӵǾ� �ִ�.
// ���α׷� �� ��Ҹ� ���õ� ��ҳ��� �׷�ȭ�� �� �ִ�.

//Audio.cpp
namespace Audio{
void init() { std::cout << "Audio init" << std::endl; }
}

//Video.cpp
namespace Video{
void init() { std::cout << "Video init" << std::endl; }
}

int main()
{
	Audio::init(); // �Լ� �̸��� init���� ���Ƶ� namespace ������� �ذ�
	Video::init();
}