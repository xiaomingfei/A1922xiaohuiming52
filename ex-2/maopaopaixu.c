#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20 

void bubble1(int a[], int n) {
	int i, j, t;
	for (i=1; j<n; i++) {
		for (j=0; j<n-i; j++) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
int main() {
	int a[N], i;
	srand(time(0));

	for (i=0; i<N; i++)
		a[i] =  rand() % 100;
	printf ("初始化数据为： ");

	for (i=0; i<N; i++)
		printf ("%d ",a[i]);
	printf("\n");
	bubble1(a ,N);
	printf("排序后数据: ");
	for (i=0; i<N; i++) printf("%d ", a[i]);
}
