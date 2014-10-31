#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
system("color f1");
    
	srand(time(0));
	int i=0;
	int a;
	int r=rand();
	r=(r%100)+1;
	cout<<endl;
	
	_Bool flagy=1;
	while(flagy)
	{	
        cout<<"                            ";
  		cout<<"Give a number 1-100: ";
		cin>>a;
		cout<<endl;
		
		while(a<1 || a>100)
		{
            cout<<"                          ";
			cout<<"ERROR... NUMBER OFF LIMITS."<<endl;
			cout<<"                            ";
			cout<<"Give a number 1-100: ";
			cin>>a;
			cout<<endl;
		}
		
		if (a==r){cout<<"                                 !!! WINNER !!! "<<endl<<endl; flagy=0;}
		else if (a<r){cout<<"------------------------------ GIVE A BIGGER ONE ------------------------------"<<endl<<endl;}
		else{cout<<"------------------------------ GIVE A SMALLER ONE -----------------------------"<<endl<<endl;}
		
		++i;
	}
	
	cout<<"                              ";
	cout<<"U won after "<<i<<" tries."<<endl<<endl;
	
system("pause");
}
