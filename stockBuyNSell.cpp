#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

/*
//Naive Solution
int maxProfit(int arr[], int start, int end)
{
    int m_profit = 0;
    
    if(start >= end)
    {
        return 0;
    }
    for(int i=0 ; i<end ;i++)
    {
        for(int j=i+1; j<=end; j++)
        {
            if(arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] + maxProfit(arr,start, i-1) + maxProfit(arr, j+1, end);
                m_profit = max(m_profit, curr_profit);
            }
        }
    }
    return m_profit;
}
*/

//Efficient Solution
int maxProfit(int arr[], int start , int end)
{
    int profit = 0;
    for(int i=1; i<end; i++)
    {
        if(arr[i] > arr[i-1])
        {
            profit += (arr[i] - arr[i-1]);
        }

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxProfit(arr,0,n-1);
    return 0;
}