#include <iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
int num[10], n = 10, i, lrg, sml;
double sum = 0;
double avg = 0;

int main()

{

	cout << "This program will show the smallest, largest integer,the total and the average of an array that takes 10 Elements only " << endl;
	cout << "Enter the 10 Integers: \n";

	for(i = 0; i < n; i++)
{
	cin >> num[i];
	sum+= num[i];
	avg = sum/ 10;
}

lrg = num[0];

	for(i = 0; i < n; i++)
	{
		if (lrg < num[i])
		lrg = num[i];
	}
sml = num[0];

	for(i = 0; i < n; i++)
	{
		if (sml> num[i] )
		sml = num[i];
	}

cout<<"\nThe Largest Integer:  " <<lrg<<endl;
cout<<"\nThe Largest Integer :  " <<sml<<endl;
cout<<"\nThe Sum of the Integers: "<<sum<<endl;
cout<<"\nThe Average of the Integers: "<<fixed<<showpoint<<setprecision(2)<<avg<<endl;

	_getch();
	return 0;

}
