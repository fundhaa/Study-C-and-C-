// main.c

void foo();
int n; // foo.c�� n ���� ���������� n�� ��������� �Ѵ�.
// ��������ָ� ��ŷ ���� �߻�

int main() {
	foo();
}

// gcc main.c -c
// gcc foo.c -c
// gcc main.o foo.o

//   compile����        linking����   
// main.c -> main.o -> mian.o + foo.o => a.exe
// foo.c -> foo.o