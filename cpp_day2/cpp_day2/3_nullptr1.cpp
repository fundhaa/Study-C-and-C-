// 3_nullptr1 - 54page
int main()
{
	// literal : 10, 3.4 �� ���α׷����� ����ϴ� ��
	int n1 = 10; // ���� 10�� ����(int)
	int* p1 = 10; // error
	
	int n2 = 0; // ���� 0�� ����
	int* p2 = 0; // ����

	// C++11���� "������ 0"�� �ǹ��ϴ� Ű���� ����
	int* p3 = nullptr;
	int n3 = nullptr; // error. nullptr�� ������ �ʱ�ȭ���� ����.
}