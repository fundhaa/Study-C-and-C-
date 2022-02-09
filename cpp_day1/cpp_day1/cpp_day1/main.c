// main.c

void foo();
int n; // foo.c의 n 값을 가져오려면 n을 선언해줘야 한다.
// 선언안해주면 링킹 오류 발생

int main() {
	foo();
}

// gcc main.c -c
// gcc foo.c -c
// gcc main.o foo.o

//   compile과정        linking과정   
// main.c -> main.o -> mian.o + foo.o => a.exe
// foo.c -> foo.o