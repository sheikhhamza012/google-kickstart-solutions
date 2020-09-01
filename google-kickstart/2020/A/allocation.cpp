//
//  allocation.cpp
//  google-kickstart
//
//  Created by sheikh hamza on 30/08/2020.
//  Copyright © 2020 sheikh hamza. All rights reserved.
//


#include "headers.h"


int allocation(){
    int T=1,N=4,B=100;
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>N>>B;
        int house[N],*sorted,count=0;
        for (int n=0;n<N;n++){
           cin>>house[n];
        }
        sorted=counting_sort(house, N,  *min_element(house , house + N),*max_element(house , house + N), ASC);
        for (int n=0;n<N;n++){
            if(B>=0&&(B-sorted[n])>=0){
                B-=sorted[n];
                count++;
            }else{
                break;
            }
        }
        cout<<"Case #"<<t+1<<": "<<count<<endl;


    }
    return 0;
}
