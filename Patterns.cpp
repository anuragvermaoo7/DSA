#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter the value";
	cin>>n;
	
	int i=1;
	
	int sum=0;
	
	while(i<=n)
	{
		sum=sum+i;
		i=i++;
	}
	cout<<"Value of sum is"<<sum<<endl;
	
	*
	
	int n;
	cin>>n;
	
	int i=2;
	int sum = 0;
	
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum+i;
			i=i+2;
		}
	}
	cout<<"sum is"<<sum<<endl;
	
	*
	
	int n,i=2;
	cin>>n;
	
	while(i<n)
	{
		i=i+1;
	}
	
	if(i%n==0)
	{
		cout<<"not prime";
	}
	else
	{
		cout<<"prime";
	}
	
	*
	
	/* 123
	   123
	   123  */
	
	int n,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<i;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	*
	
	/* 3
	   32
	   321  */
	
	int n,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int c=n;
		int j=1;
		while(j<=i)
		{
			cout<<c;
			c=c-1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	*
	
	/*Binary Search*/
	
	int bs(int arr[],int size,int key)
	{
	int start=0 , end=size-1;
	int mid = (start + end) / 2;
	
	while(start<=end)
	{
		if(arr[mid]>key)
		{
			end=mid-1;
		}
		if(arr[mid]<key)
		{
			start=mid+1;
		}
		if(key==arr[mid])
		{
			return mid;
		}
		mid = (start + end)/ 2;
	}	
	}
	int main()
	{
	int arr[8]={1,2,3,4,5,6,7,8};
	
	int p = bs(arr,8,4);
	cout<<p<<endl;
	
	}
	
	*
	
	/* Selection sort */
	
	for(int i=0;i<n-1;i++)
	{
		int minindex = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[minindex]>arr[j])
			{
				minindex=j;
			}
		}
		swap(arr[minindex],arr[i]);
	}
	
	*
	
	/*bubble*/
	
	 for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
       for(;j>=0;j--){
           if(arr[j]>temp){
               arr[j+1]=arr[j];
           }
           else
               break;
       }
        arr[j+1]=temp;
    }
	
	*
	
	/* */
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	*
	
	
	/*   *
	    **
	   ***   */
	   
	int n,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int s = n-i;
		while(s)
		{
			cout<<" ";
			s = s-1;
		}
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j= j+1;
		}
		cout<<endl;
		i= i+1;
	}
	
	*
	
   	/*   ****
	      ***
     	   **
    	    *    */
    	    
    int n,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int st = n-i+1;
		while(st)
		{
			cout<<"*";
			st = st-1;
		}
		cout<<endl;
		i=i+1;
	}
	
	*
	
	
	****
	***
	**
	*
	
	int n,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int st = n - i + 1;
		while(st)
		{
			cout<<"*";
			st = st-1;
		}
		int j = 1;
		int sp = n - 1;
		while(j<=i)
		{
			sp = sp + 1;
			cout<<" ";
			j=j+1;4
			
		}
		cout<<endl;
		i = i +1;
		
	}
	
	*
	
	int n,pod=1,sum=0,digit,a;
	cin>>n;
	
	while(n!=0)
	{
		digit = n % 10;
		
		pod = pod * digit;
		sum = sum + digit;
		
		n = n/10;
		n++;
	}
	a = sum - pod;
	cout<<a;
	
	*
	
	int n,c=0;
	cin>>n;
	
	while(n!=0)
	{
		if(n&1)
		{
			c++;
		}
		n = n>>1;
	}
	return c;
	
	*
	
	/*Power*/
	
	int a,b,i=1;
	cin>>a >>b;
	
	int ans=1;
	
	for(i;i<=b;i++)
	{
		ans = ans*a;
	}
	
	cout<<ans <<endl;
	return 0;
	
	*
	
	/*AP FC*/
	
	int ap(int n)
	{
	int i,ans=1;
	
	for(i=1;i<=n;i++)
	
	ans = n*n+7;
	
	return ans;
	}

	int main()
	{
	int k,ans;
	cin>>k;
	
	ans = ap(k);
	cout<<ans;
	return k;
	}
	
	*
	
  /* ***
	 **
	 *  */
	
	int n,i=1;
	
	cout<<"Enter The Value";
	cin>>n;
	
	while(i<=n)
	{
		int star = n - i + 1;
		while(star)
		{
			cout<<"*";
			star = star - 1;
		}
		cout<<" ";
		cout<<endl;
		i=i+1;
		
	}
	
	*
	
	/* 1
	    2
		 3
 		  4
   		   5
    		6  */
	
	int n,i=1;
	
	cout<<"Enter The Value";
	cin>>n;
	
	while(i<=n)
	{
		int s = i - 1;
		while(s)
		{
			cout<<" ";
			s = s - 1;
		}
		cout<<i;
		cout<<endl;
		i = i + 1;	
	}
	
	*
	
	/*  1111
		 222
		  33
		   4 */
	
	int n,i=1;
	
	cout<<"Enter The Value";
	cin>>n;
	
	while(i<=n)
	{
		int s = i-1;
		
		while(s)
		{
			cout<<" ";
			s = s - 1;
		}
		
		int j = n - i + 1;
		
		while(j)
		{
			cout<<i;
			j=j-1;
		}
		cout<<endl;
		i = i + 1;
	}
	
	*
	
/*    1
 	 121
 	12321
	1234321  */
	
	int n,i=1;
	
	cout<<"Enter The Value";
	cin>>n;
	
	while(i<=n)
	{
		int sp = n - i;
		while(sp)
		{
			cout<<" ";
			sp = sp - 1;
		}
		int j = 1;
		while(j<=i)
		{
			cout<<j;
			j=j+1;
		}
		
		int st = i - 1;
		
		while(st)
		{
			cout<<st;
			st = st - 1;
		}
		cout<<endl;
		i = i + 1;
	}
	
	*
	
	/*length of string*/
	
	int getlen(char ch[])
	{
	int count=0;
	
	for(int i=0; ch[i]!='\0';i++)
	{
		count++;
	}
	return count;
	}
	int main()
	{
	char ch[20];
	
	cout<<"ENTER YOUR NAME SIR: ";
	cin>>ch;
	
	cout<<"Your name is: "<<ch<<endl;;
	
	cout<<"length of the array was: "<<getlen(ch);
	}
	
}
