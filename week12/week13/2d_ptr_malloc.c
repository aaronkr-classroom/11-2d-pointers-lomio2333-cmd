//2d_ptr_malloc.c

#include<stdio.h>
#include<malloc.h>

int main(void) {

	short** pp;
	//4바이트를 할당함,두 번째 상자 만듦
	pp = (short**)malloc(sizeof(short*));//4바이트
	//2바이트를 할당 세 번째 상자 만듦
	*pp = (short*)malloc(sizeof(short));//2바이트

	//2차원 포인터를 사용하여 세 번째 상자에 10을 대입
	**pp = 10;
	printf("**pp:%d\n", **pp);

	free(*pp); //세 번째 상자에 해제
	free(pp);  //두 번째 상자에 해제

	return 0;
}