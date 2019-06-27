/* 
* @Author: anchen
* @Date:   2019-06-28 00:19:32
* @Last Modified by:   anchen
* @Last Modified time: 2019-06-28 00:33:00
*/
#ifdef INSERTSORT_C
#define INSERTSORT_C

#include <iostream>
#include <algorithm>
using namespace std;

/*
 *插入排序：从剩余的里面与前面的对比
 */
template<typename T>
void insertSort1(T arr[], int n)
{
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j --){
            if(arr[j] > arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else{
                break;
            }
        }
    }
}

//插入排序，不适用swap函数，而是直接使用赋值
template<typename T>
void insertSort2(T arr[], int n)
{
    for(int i = 1; i < n; i++){
        T tmp = arr[i];
        for(j = i; j > 0 && arr[j-1] > tmp; j--){
            arr[j] = arr[j - 1];
        }
        arr[j] = tmp;
    }
}
#endif