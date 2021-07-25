/*
My Approach >>					NOT WORKING!!

I have modified the Dutch National flag technique a little bit. Refer to sort arrays of 0s 1s and 2s without any sorting algo

TC = O(N)
SC = O(1)
*/

#include<iostream>

using namespace std;

int minSwap(int a[],int n,int k)
{
	int swaps=0;
	
	int l=0;
	int m=0;
	int h=n-1;
	
	while(m<=h)
	{
		//testing part
		cout<<"\nl => "<<l;
		cout<<"\nh => "<<h;
		cout<<"\nm => "<<m;
        cout<<"\n\n";
		
		//everything is normal as desired
		if(a[m]<k)
		{
			m++;
		}
		else if(a[m]==k)
		{
			m++;
		}
		else if(a[m]>k)
		{
			swaps++;
			cout<<"\nSwaps => "<<swaps;
			h--;
		}
	}
	
	return swaps;
}


int main()
{
	int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << minSwap(arr, n, k) << "\n";
      
	
	return 0;
}
