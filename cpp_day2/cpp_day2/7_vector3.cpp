#include <iostream>

int main() {
	// 4. ����ڰ� -1�� �Է��Ҷ����� ��� �Է¹ް�ʹ�.
	// ��, �Էµ� ���� ���߿� ����ϱ� ���� �ݵ�� �����Ǿ���Ѵ�.

	//int score[5]; // �̷��� �ϸ� ������ ������ �ִ�. == �޸𸮸� ���������� ���� �� ����.
	int size = 5; // ���� �Ҵ�� �迭 ũ��
	int* score = new int[size]; // �̷��� �ϸ� ���� �� ���� �� �ִ�.

	int num = 0;
	int count = 0; // �Է��� ����

	while (1) {
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;

		if (count == size) { // ����(�迭)�� ���� �� ����
			int* temp = new int[size + 5];
			memcpy(temp, score, sizeof(int) * size);
			// memcpy(�������ּ�(200), �����ּ�(100), ũ��(20byte))
			// temp�� ����Ű�� �ּҿ� score�� ����Ű�� �ּ��� ������ 
			// sizeof(int) * size = 20 byte ��ŭ���� �����ش޶�.

			delete[] score; // ���� �迭 ����,
			//score�� ����°� �ƴϰ� score�� ����Ű�� �ּҿ� �ͼ� �� �ּ��� �޸𸮸� ����

			score = temp;
			size = size + 5;
			// score�� ���� 100�� �ּҸ� ����Ű�� int[5]��ŭ�� ������ �Ҵ�޾Ѵµ�
			// ���� ����ִ� ������ temp(200�� �ּҸ� ����Ŵ)�� �Űܳ��� score�� ������ ����.
			// �׸��� score�� 200�� �ּҸ� ����Ű�� �Ѵ�.
			// �׷� score�� ����Ű�� �ּҿ� ������ ����� �Է��� ���� ���ִ� ���̴�.
		}
	}
		std::cout << " �Է��� ���� : " << count << std::endl;
		std::cout << "���� ���� �Ҵ�� �迭 ũ�� : " << size << std::endl;

		for (int i = 0; i < count; i++) {
			std::cout << score[i] << ", ";
		}
		// ���̻� �ʿ� ������ �� �޸� ����
		delete[] score;
}

// �� ������ �����迭(vector)��� �ڷᱸ���̴�.
// �ڷᱸ�� : �����͸� �޸𸮿� ��� ������ ���ΰ��� ���� ���� ����