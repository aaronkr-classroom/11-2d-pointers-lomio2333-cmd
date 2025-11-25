//2d_ppl_arr.c
#include<stdio.h>
int main(void) {

	int ages, member, temp, sum;
	unsigned char limit_table[3] = { 4,2,3 };
	unsigned char count[3][4];

	for (ages = 0; ages < 3; ages++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n",ages+2);

		for (member = 0; member < limit_table[ages];member++)
			printf("#%d",member+1);

		scanf_s("%d\n",&temp);
		count[ages][member] = (unsigned char)temp;

	}
	printf("\n\n연령별 평균 윗몸 일으키기 수\n");

	for (ages = 0; ages < 3; ages++) {

		sum = 0;
		printf("%d0대", ages + 2);
		for (member = 0; member < limit_table[ages]; member++) {
			sum = sum + count[ages][member];

		}

		printf("%5.2f\n", (double)sum / limit_table[ages]);


	}

	
	return 0;

}

