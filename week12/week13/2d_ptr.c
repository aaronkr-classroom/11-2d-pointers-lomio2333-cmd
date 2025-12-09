//2d_ptr.c

#include<stdio.h>

int main(void) {
	short data = 3,
		* p = &data,//data 변수 주소
		** pp = &p;//포인터 p의 주소(2차원)

	printf("[before ] data:%d\n",data);//3
	*p = 40;
	printf("[use *p ] data:%d\n:",data);//40
	**pp = 500;
	printf("[use **pp ] data:%d\n:", data);//500

	


	return 0;
}