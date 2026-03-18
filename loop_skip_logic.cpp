#include<iostream>
using namespace std;
int main(){
	
	int num=0;			//if there is number 7 come so the program stop automatically
	int i=1;
	
	cout<<"enter number: ";
	cin>>num;
	
	while(i<=num)
{
		
		if(i==7)
		{
			
		continue;
		
		}
		
	else
	{
		
	cout<<i;
	i++;
	}
	
}

}
