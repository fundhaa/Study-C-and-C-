// 3_static ����1
#include <iostream>

// ���α׷����� ��¥�� ���� �ٷ�� �ȴ�.
// ==> DATA Ÿ���� ��������

// ���� å���� ��Ģ : ����Ͻú��ʸ� �� �ִ°ͺ��� ������ ������, �ú��ʷ� ��°� ����.
// Ŭ������ �ϳ��� �ϳ���

// �� ���� ��¥��.
// ���������� ���� ���ٴ� Ŭ���� ������ �������°� ���� ��.
// �ֳĸ� �ܺο��� �����ؼ� �迭 value �ٲ������ ������ ����� �����̴�.
// int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Date
{
	int year;
	int month;
	int day;
	//int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // instance ���������, �Ϲ� ��������� �ϱ�
	// d1, d2 �� ��¥ ��ü�� �����Ҷ����� ��ü���� ���� days�� �����ȴ�. �׷� �޸������� �����̴ϱ�
	// static���� �����Ͽ� �ѹ��� �����ǰ� �Ѵ�.
	static int days[12]; // static�� �ܺο��� �ʱ�ȭ ���־�� �Ѵ�.
public:
	Date(int y, int m, int d) :year(y), month(m), day(d) {

	}
	// �ִ��� â�Ƿ��� �����ؼ� ����ڵ��� �����Ҹ��� �پ��� ����Լ��� �����ؾ� �Ѵ�.
	// == ����ɷ�
	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds);
		if (day == days[month - 1]+1){
			month = month + 1;
			day = 1;
		}
		if (month == 13) {
			year = year + 1;
			month = 1;
		}

		return temp;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // static ��������� �ʱ�ȭ

int main() {
	Date today(2022, 2, 11);
	Date d = today;
	Date d = today.afterDays(1000);
}