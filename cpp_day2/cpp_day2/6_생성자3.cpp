// 5_�ļ���3-78 page

#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. ��ü ������ �ݵ�� �����ڰ� ȣ��Ǿ���Ѵ�.
	// 2. ����ڰ� �����ڸ� �Ѱ��� ������ ������ �����Ϸ��� ���� ���� ������ ����
	//     => "����Ʈ ������" : ���ڰ� ���� ������
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main() {
	Point p1; // ����ڰ� Point ���� �����൵ ����� �ȴ�.
	Point p2(1, 2);
	//Point p3(1); // error. ���ڰ� �Ѱ��� �����ڴ� ����.
	//-------------------------------------------

	Point arr1[5]; // 1�� ������ 5ȸ ȣ�� p1
	Point arr2[5] = { {1,1} ,{2,2} }; // 2�������� 2ȸ p2, 1�� ������ 3ȸ p3

	Point* p; //��ü ������ �ƴϴ�. ������ ȣ�� �ȵ�.

	p = static_cast<Point*>(malloc(sizeof(Point))); // 1. 8����Ʈ �޸� �Ҵ��ض�
													// 2, Point ��ü �����ض�.
													// ���� 1��. �����ڸ� ���θ���.
	free(p);
	p = new Point; // Point ��ü �Ѱ��� ���� �Ҵ��ض�, ������ ȣ��
	delete p;

	p = new Point(1, 2); // 2�� ������
	delete p;

	// �׷��� C++ ���� ��ü ���� �� malloc ��� new�� ����ؾ� �Ѵ�.
}