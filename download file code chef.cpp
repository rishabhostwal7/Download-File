#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int t,i,n,k,s1,s=0;
   cin>>t;
   while(t--)
   {s1=0;
   cin>>n>>k;
   int time[n],data[n];
   for(i=0;i<n;i++)
   {
   	cin>>time[i]>>data[i];
   }
   if(time[0]<=k)
   { s=k-time[0];
    for(i=0;i<n-1;i++)
    {
      s1=((time[i+1]-s)*data[i+1])+s1;
	  s=0;   	
     }
 }
     else
     {  
	    for(i=0;i<n;i++)
     	{
		 s1=(time[i]-k)*data[i]+s1;
		 k=0;
	 }
}
   cout<<s1<<endl;
}
   return 0;
}
