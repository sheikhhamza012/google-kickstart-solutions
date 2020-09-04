//
//  plates.cpp
//  google-kickstart
//
//  Created by sheikh hamza on 01/09/2020.
//  Copyright © 2020 sheikh hamza. All rights reserved.
//

#include "headers.h"


int plates(){
    int T=1,N=2,K=4,P=5;
//    cin>>T;
    for(int t=0;t<T;t++){
//        cin>>N>>K>>P;
        int plates[2][4]={{10,10,100,30},{80,50,10,50}},sums[(N*K)-(P-1)],greatest=0,remaining=P;
//        for (int n=0;n<N;n++){
//            for (int n=0;n<K;n++){
//                   cin>>plates[n];
//                }
//        }
        for (int n=0;n<N;n++){
            for (int k=0;k<K;k++){
                for (int p=k;p<P;p++){
                    sums[n]+=plates[p];
                }
            }
        }
        cout<<"Case #"<<t+1<<": "<<*max_element(sums , sums + (N*K-P-1))<<endl;


    }
    return 0;
}
