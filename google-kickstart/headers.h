////
////  headers.h
////  google-kickstart
////
////  Created by sheikh hamza on 30/08/2020.
////  Copyright © 2020 sheikh hamza. All rights reserved.
////

#ifndef headers_h
#define headers_h

#include <iostream>
#include<string.h>
#include <algorithm>
enum order {ASC,DESC};
// def -> helper.cpp
int* counting_sort(int* input,int size,int min,int max,enum order by);
// def-> ./2020/A/allocation.cpp
int allocation();

using namespace std;



#endif /* headers_h */
