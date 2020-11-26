#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20 

int Partition(int a[], int low, int high) {
	int  x = a[low];
	while (low < high) {
		while (low <high && a[high]>=x) high--;
		if (low < high) {
			a[low] = a[high];
			low++;
		}
		while (low<high && a[low]<=x) low++;
		if (low < high) {
			a[high] = a[low];
			high--;
		}
	}
	a[low] = x;
	return low;
}
void QSort(int a[], int low , int high) {
	if (low < high) {
		int mid = Partition(a, low, high);
		QSort(a, low, mid-1);
		QSort(a, mid+1, high);
	}
}

void QuickSort(int a[]; int n) {
	QSort(a, 0, n-1);
}

int main() {
	int a[N], i;
	srand(time(0));
	for (i=0; i<N; i++)
		a[i] = rand() & 100;
	printf("初始化数据: ");
	for (i=0; i<N; i++)
		printf("\n");
	QuickSort(a, N);
	printf("排序后d数据: ");
	for (i=0; i<N; i++) printf("%d ", a[i]);
}
