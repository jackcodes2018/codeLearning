/*
 *选择排序：就是将剩余没有排序好的进行排序
 */
//Function1---初级选择排序（只能对整数类型进行排序）
void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        //寻找[i,n)区间里的最小值
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

、、

//Function2---模板函数
typename<tyepname T>
void selectionSort(T arr[], int n)
{
   for(int i = 0; i < n; i++){
        //寻找[i,n)区间里的最小值
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

//Function3---选择排序while写法
template<typename T>
void selectSort3(T arr[], int n)
{
    int left = 0;
    int right = n-1;
    while(left < right){
        if(arr[left] > arr[right]){
			swap(arr[left], arr[right]);
		}
		
		int minIndex = left;
		int maxIndex = right;
		for(int i = left + 1; i < right; i++){
			if(arr[i] < arr[minIndex]){
				minIndex = i;
			} else if(arr[i] > arr[maxIndex]){
				maxIndex = i;
			}
		}
		swap(arr[left], arr[minIndex]);
		swap(arr[right], arr[maxIndex]);
		left++;
		right--;
    }
}