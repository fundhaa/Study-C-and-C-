// �������� : Date Ŭ������ ��� �Լ��� ������ const ����� �����غ���
// Date afterDays(int ds) <=== const �ٿ����Ѵ�. ���� �������� �ʱ� ����
// Date d = today.afterDays(1000) <== today ��ü ���� ���� �ȵǹǷ� const ���̱�
//			today.setYear(2022) <== ���� ����ǹǷ� const ���̸� �ȵȴ�.

// 3_static ����2
#include <iostream>

class Date
{
	int year;
	int month;
	int day;

	static int days[12]; 
public:
	Date(int y, int m, int d) :year(y), month(m), day(d) {

	}

	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds);
		//���� ������ ��.
		if (day >= days[month - 1] + 1) {
			month = month + 1;
			day = 1;
		}
		if (month == 13) {
			year = year + 1;
			month = 1;
		}
		
		return temp;
	}
	// 1. �� �Լ��� �� ��ü�� ���� �� ����ؾ�����
	// 2. ��ü ���̵� ����� �� �ְ� ����?
	// �ش� ���� ���ϱ��� �ִ����� ���� ��¥�ʹ� ���谡 �����Ƿ� 2��
	// 2������ ������ static���� ���� �ϸ� �ȴ�.
	static int howManyDays(int m) { return days[m - 1]; }
	void print() {
		std::cout << year << "��" << month << "��" << day << "��" << std::endl;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	Date today(2022, 2, 11);
	//Date d = today;
	Date d = today.afterDays(1000);
	int n1 = today.howManyDays(2); // 2������ ���ϱ��� �ִ��� �˷��ִ� ����Լ�
	int n2 = Date::howManyDays(2); // OK
	d.print();

	//Date d = today.tomorrow(); // ���� ��¥�� ������ �ʿ��ϴϱ� static�� ����ϸ� �ȵȴ�.
	
}