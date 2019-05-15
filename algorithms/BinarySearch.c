//
// Created by Administrator on 2019/5/15.
//

#include "BinarySearch.h"

int isSorted(int array[], int length){
    int i;
    for(i = 0;i < length - 1;i++){
        if(array[i] > array[i + 1])
            return 0;
    }
    return 1;
}

void sort(int array[], int length){
    int i,j;
    for(i = 0;i < length;i++){
        for(j = 0;j < length - i - 1;j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int array[], int length, int key){

    int index = -1;

    if(!isSorted(array, length))
        sort(array, length);

    int high = length - 1;
    int low = 0;
    int mid;
    while (low <= high){
        mid = (low + high) / 2;
        if(key > array[mid])
            low = mid + 1;
        else if(key < array[mid])
            high = mid - 1;
        else{
            index = mid;
            break;
        }
    }
    return index;
}
