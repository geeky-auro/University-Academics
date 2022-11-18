#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[]={2, 3 ,4 ,5 ,6 ,7 ,8 ,9, 10 ,11 ,12 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,28};
    // int arr[]={14,15,92};
    // int *arr=new int[n];
    int count=0;
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    sort(arr, arr + n);
    for(int i=1,k=0;i<arr[n-1];i++){
        if (arr[k]!=i)
        {
            count++;
        }
        else{
            k++;
        }
        
    }
    // cout<<count-25+n<<endl;
    printf("%d",(count-25+n));
    return 0;
}
