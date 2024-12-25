#include<iostream>
using namespace std;
int isPerfectOrNot(int n=6)
{
    int sum = 1;
    for(int i=2; i*i<=n; i++)
	{
        if(n%i==0)
        {
            if(i*i!=n)
            {
            	sum = sum + i + n/i;
			}
            else
            {
            	sum=sum+i;
			}
        }
    }
    if(sum == n && n != 1)
    {
     	return 1;
	}
     	return 0;
}
int perfectNumbers(int n)
{
    int sum = 1;
    for(int i=2; i*i<=n; i++)
	{
        if(n%i==0)
        {
            if(i*i!=n)
            {
            	sum = sum + i + n/i;
			}
            else
            {
            	sum=sum+i;
			}
        }
    }
    if(sum == n && n != 1)
    {
     	return 1;
	}
     	return 0;
}
int main()
{
    for(int n = 2; n <= 6; n++)
    {
    	if (isPerfectOrNot(n))
    	{
    		cout << n << " is a perfect number, because 6 = 1 + 2 + 3." << endl << endl;
		}
	}
    cout << "All perfect numbers between 1 and 1000 are as under:" << endl;
    for(int n =2; n<1000; n++)
    {
    	if (perfectNumbers(n))
    	{
    		cout << n << " is a perfect number\n";
		}
	}
    return 0;
    system("pause");
}