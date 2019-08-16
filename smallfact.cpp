#include <iostream>
using namespace std;
 
int main() {
int n,t,x,i,j,a[201],temp,val,r,q;
	cin>>t;
    for(x=1;x<=t;x++)	
	{
	    cin>>n;
        
 
 
	for(i=0;i<=200;i++)
    {
        	a[i]=0;
    }
	
	a[200]=1;
	temp=0;
	for(j=1;j<=n;j++)
	{
		
		for(i=200;i>=0;--i)
		{
			val=a[i]*j+temp;
		    a[i]=val%10;
	     	temp=val/10;
		}
		
	}
	q=0;
 
	while(a[q]==0)
	{
	    q++;
	}
	cout<<endl;
	for(r=q;r<=200;r++)
    {
        	cout<<a[r];
    }
	
}
 cout<<"\n";   	// your code goes here
	return 0;
}
