/*
GFG Approach >>

use two pointer technique and sliding window.

>> Find count of all elements which are less than or equals to ‘k’. Let’s say the count is ‘cnt’

>> Using two pointer technique for window of length ‘cnt’, each time keep track of how many elements in this range are greater 
   than ‘k’. Let’s say the total count is ‘bad’.
   
>> Repeat step 2, for every window of length ‘cnt’ and take minimum of count ‘bad’ among them. This will be the final answer.

TC = O(N)
SC = O(1)
*/

#include<iostream>
#include<algorithm>      //to use min()

using namespace std;

int minSwap(int a[],int n,int k,int count)
{
	int swaps=0,bad=0;
	
	
	//making sliding window of size count
	int start=0;  
	int end=0;
	
	while(end<n)
	{
		//current window me kitne unwanted elements (elements > k) hai wo dekho 
		for(int i=start;i<=end;i++)
		{
			if(a[i]>k)
			{
				bad++;
			}
		}
		
		//calculate for swaps now
		swaps=min(swaps,bad);
		
		start++;
		end=start+count;	
	}
	
return swaps;
}


int main()
{
	int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int count=0;
    
    //Find count of all elements which are less than or equals to ‘k’. Let’s say the count is ‘cnt’
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=k)
			count++;  //this will be size of our window
	}
    
    cout << minSwap(arr,n,k,count) << "\n";
      
	
	return 0;
}
