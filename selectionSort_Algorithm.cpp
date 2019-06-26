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