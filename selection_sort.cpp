#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13


    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}


// #include<iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <sstream>
// #include <queue>
// #include <deque>
// #include <bitset>
// #include <iterator>
// #include <list>
// #include <stack>
// #include <map>
// #include <set>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <limits>
// #include <time.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// using namespace std;
// const double pi=acos(-1.0);
// typedef pair<int, int> PII;
// typedef vector<int> VI;
// typedef vector<string> VS;
// typedef vector<PII> VII;
// typedef vector<VI> VVI;
// typedef map<int,int> MPII;
// typedef set<int> SETI;
// typedef multiset<int> MSETI;
// typedef long int int32;
// typedef unsigned long int uint32;
// typedef long long int int64;
// typedef unsigned long long int  uint64;
// void selection(int a[],int n)
// {

//     int index,temp;
//     for(int i=0;i<n;i++)
//     {
//         index=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[j]<a[index])
//             index=j;
//         }
//         temp=a[i];
//     a[i]=a[index];
//     a[index]=temp;
//     }
    
// }
//  void printArray(int a[], int n){
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    }

// int main()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     printArray(a,n);
//     selection(a,n);
//     printArray(a,n);
    
// }