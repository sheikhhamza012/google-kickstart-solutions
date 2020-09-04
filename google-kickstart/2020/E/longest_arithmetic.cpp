//
//  longest_arithmetic.cpp
//  google-kickstart
//
//  Created by sheikh hamza on 04/09/2020.
//  Copyright © 2020 sheikh hamza. All rights reserved.
//

#include "headers.h"
int longest_arithmetic(){
    int T=1,N=9;
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>N;
        int arr[N],prev=0,current=0,diff=0,curr_diff=0;
        for (int n=0;n<N;n++){
           cin>>arr[n];
            if(!n){
                continue;
            }
            curr_diff=arr[n]-arr[n-1];
           if(curr_diff==diff){
               current++;
           }else{
               if(prev<current){
                   prev=current;
               }
               current=1;
               diff=curr_diff;

           }
        }

        int count=prev<current? current:prev;
        cout<<"Case #"<<t+1<<": "<<count+1<<endl;


    }
    return 0;
}
