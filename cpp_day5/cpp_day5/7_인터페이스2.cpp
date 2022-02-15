#include <iostream>

// ī�޶�� ����� ���̿� ���Ѿ��ϴ� ��Ģ�� ���� ����(�������̽�)
// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ�����κ��� �Ļ��Ǿ���Ѵ�.

class ICamera
{
//	int color; // �߻�Ŭ������ �����ִ� ��. �����ִ� �Ͱ� ��Ģ�� ������ �߻�Ŭ����
				// ��Ģ�� ������ �������̽�
public:
	virtual void take() = 0; // ��� �Ļ�Ŭ�������� take�� ����ض� ��� ��Ģ
	virtual ~ICamera() {} // ���� ���� �Լ�
};

// ���� ��¥ ī�޶�� ������, ī�޶� ����ϴ� �ڵ带 ���� ���� ���� �ִ�.
// ��Ģ��θ� ����ϸ� ����

// ICamera��� �߻�Ŭ����(�������̽�)�� ����߰�
// People�� Camera class���� ���� ������� �ʾ����Ƿ� 
// ī�޶� �߰��Ǿ �ڵ带 �ٲ��� �ʾƵ� �ȴ�.
// 
// ���� ����
// �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� ���Ŭ������ �߻�Ŭ����(�������̽�)�� ���ؼ� ����ϴ� ��
// 
// ��� ����
// �������̽� : ��� ����� ���� �����Լ�(��Ģ)�� �ִ� ���(���� ��� ICamera)
// �߻�Ŭ���� : ���� �����Լ� + ������ �ٸ� �����(���� ��� Shape)

// �����ϰ� Ȯ�强 �ִ� �������� ���ؼ��� loosely coupling�� ����Ѵ�.(O)
class People {
public:
	void useCamera(ICamera* p) { p->take(); }
};

class Camera : public ICamera {
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera {
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};
class UHDCamera : public ICamera {
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};


int main() {
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc); // �̰� �Ϸ��� people Ŭ������ HDCamera�� �Է����� �޴� �Լ��� �־�����Ѵ�.
						// HDCamera�� ���͵� �Լ��� ���� ���ϰ� �ؾ� OCP�� �����ϴµ� �̰� OCP�� �������� ���ϴ� �ڵ��̴�.
	UHDCamera uhc;
	p.useCamera(&uhc);
}