#include <iostream>
#include<conio.h>
#include <cstring>

using namespace std;
int main()
{
	char a[500];
	int s;

cout<<"Enter characters: ";
cin.getline(a,500);
s=strlen(a);
	for (int i = s; i >= 0; i--)
{
	cout<<a[i];
}
	cout<<"\nArray Size:"<<s+1<<endl;

 _getch();
return 0;
}

