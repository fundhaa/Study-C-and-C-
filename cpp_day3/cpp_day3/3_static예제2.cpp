// 3_static 예제2
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
		//내가 구현한 것.
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
	// 1. 이 함수는 꼭 객체를 만든 후 사용해야할지
	// 2. 객체 없이도 사용할 수 있게 할지?
	// 해당 월이 몇일까지 있는지는 오늘 날짜와는 관계가 없으므로 2번
	// 2번으로 가려면 static으로 가게 하면 된다.
	static int howManyDays(int m) { return days[m - 1]; }
	void print() {
		std::cout << year << "년" << month << "월" << day << "일" << std::endl;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	Date today(2022, 2, 11);
	//Date d = today;
	Date d = today.afterDays(1000);
	int n1 = today.howManyDays(2); // 2월달이 몇일까지 있는지 알려주는 멤버함수
	int n2 = Date::howManyDays(2); // OK
	d.print();

	//Date d = today.tomorrow(); // 오늘 날짜가 무조건 필요하니까 static을 사용하면 안된다.
	
}