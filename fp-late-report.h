#include <stdio.h>

int people_num[6];

int main(void) {
	int i, j, tmp, big_num, small_num;

	printf("5人の点数を入力してください\n");

	for (i = 1; i <= 5; i++) {
		printf("%d人目 ＞＞ ", i);
		scanf_s("%d", &people_num[i]);
	}

	printf("--------------------------\n");
	printf("         得点グラフ        \n");
	printf("--------------------------\n");

	for (i = 1; i < 6; ++i) {
		for (j = i + 1; j < 6; ++j) {
			if (people_num[i] < people_num[j]) {
				tmp = people_num[i];
				people_num[i] = people_num[j];
				people_num[j] = tmp;
			}
		}
	}

	for (i = 1; i < 6; ++i) {
		printf("第%d位（%d点）:", i, people_num[i]);
		big_num = people_num[i] / 10;
		small_num = people_num[i] % 10;
		for (j = 0; j < big_num; ++j) {
			printf("#", j);
		}
		for (j = 0; j < small_num; ++j) {
			printf("*", j);
		}
		printf("\n");
	}
}
