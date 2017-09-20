// https://www.hackerrank.com/challenges/simple-array-sum/problem

#include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    int sum = 0;

    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d", &arr[arr_i]);
       sum += arr[arr_i];
    }
    
    printf("%d", sum);
    return 0;
}
