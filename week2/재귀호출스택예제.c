#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1); //인자로써 1이 들어간다. 

	return 0;
}


void my_func(int n) {
	printf("LEVEL %d, address of variable n = %d\n", n, (int)&n); //ptr -> int casting(10진수)

	if (n < 4)
		my_func(n + 1);

	printf("LEVEL %d, address of variable n = %d\n", n, (int)&n);
}

//출력화면 
//LEVEL 1, address of variable n = 1832892
//LEVEL 2, address of variable n = 1832676
//LEVEL 3, address of variable n = 1832460
//LEVEL 4, address of variable n = 1832244
//LEVEL 4, address of variable n = 1832244
//LEVEL 3, address of variable n = 1832460
//LEVEL 2, address of variable n = 1832676
//LEVEL 1, address of variable n = 1832892
// n들은 이름만 같지 다른 변수이다. 
// 주소가 16bit씩 차이가 나는 이유는 함수 자체도 메모리를 먹기 때문이다. 