////
////  helper.cpp
////  google-kickstart
////
////  Created by sheikh hamza on 30/08/2020.
////  Copyright © 2020 sheikh hamza. All rights reserved.
////
//
#include "headers.h"

int* counting_sort(int *arr,int size,int min,int max, enum order order_by){
    int *sorted= (int*) malloc(size*sizeof(int)),inter_size=(max-min)+2, intermediate[inter_size];
    memset(sorted, 0,  size);
    memset(intermediate, 0, inter_size*sizeof(int));
    for(int i=0;i<size;i++){
        intermediate[arr[i]-min]+=1;
    }
    for(int i=1;i<inter_size;i++){
        intermediate[i]+=intermediate[i-1]; 
    }
    for(int i=0;i<size;i++){
        int ind=intermediate[arr[i]-min]-1;
        if(order_by!=ASC)
            ind=size-intermediate[arr[i]];
        sorted[ind]=arr[i];
        intermediate[arr[i]-min]-=1;
    }
    return sorted;
}
