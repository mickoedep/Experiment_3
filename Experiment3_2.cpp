#include <iostream>
#include <conio.h>

using namespace std;

int p = 3;
int d = 7;
int y;

int main()

{
	int temp[p][d];

	cout<<"Enter all temperature for a week of Province A, Province B and then Province C.\n" <<endl;
	{
		for(y = 0; y < d; y++)
		{
			cout<<"Province A, Day: " <<y+1 <<" : ";
			cin>>temp[0][y];
		}

		for(y = 0; y < d; y++)
		{
			cout <<"Province B, Day: " <<y+1 <<" : ";
			cin>>temp[1][y];
		}
		for(y=0; y<d;y++)
		{

			cout<<"Province C, Day: " <<y+1 << " : ";
			cin>>temp[2][y];
		}
	}
		cout<<"\nDisplaying Values : \n" <<endl;
	{
		for(y= 0; y< d; y++)
		{
			cout<<"Province A, Day: " <<y+1 << " = " <<temp[0][y]<<endl; 

		}

		for(y=0;y<d;y++)
		{
			cout<<"Province B, Day: " <<y+1 <<" = " <<temp[1][y]<<endl;
		}
		for(y=0;y<d;y++)

		{
			cout<<"Province C, Day: " <<y+1<<" = " <<temp[2][y]<<endl;
		}

	}
	_getch();
	return 0;
}



