#ifndef GENERATERANDOM_S
#define GENERATERANDOM_S
#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper
{
    /*生成n个元素的随机数组，每个元素的随机范围为[rangeL,rangeR]*/
    int *generateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL ≤ rangeR);
        int *arr = new int[n];
        srand(time(NULL));
        for(int i = 0; i < n; i++){
            arr[i] = rand() % (rangeR - rangeL + 1) + randgeL;
        }
        return arr;
    }
}

#endif