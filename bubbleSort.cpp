//冒泡排序

#ifndef BUBBLESORT_C
#define BUBBLESORT_C
#include <iostream>
using namespace std;

//Function1：冒泡排序通常版本
template<typename T>
void bubbleSort1(T arr[], int n)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	
}

template<typename T>
void bubbleSort2(T arr[], int n)
{
	bool swapped;
	do{
		swapped = false;
		for(int i = 1; i < n; i++){
			if(arr[i - 1] > arr[i]){
				swap(arr[i - 1], arr[i]);
				swapped = true;
			}
			// 优化, 每一趟Bubble Sort都将最大的元素放在了最后的位置
			// 所以下一次排序, 最后的元素可以不再考虑
			n--;
		}
	}while(swapped);
}


// 我们的第二版bubbleSort,使用newn进行优化
template<typename T>
void bubbleSort3(T arr[], int n) {

	int newn; // 使用newn进行优化

	do {
		newn = 0;
		for (int i = 1; i < n; i++)
			if (arr[i - 1] > arr[i]) {
				swap(arr[i - 1], arr[i]);

				// 记录最后一次的交换位置,在此之后的元素在下一轮扫描中均不考虑
				newn = i;
			}
		n = newn;
	} while (newn > 0);
}
#endif