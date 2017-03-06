#include <iostream>
#include "List.h"

using namespace std;

int menu(int choice)
{
int choice;
cout <<"Welcome to the list implementation program :D"<<endl;
cout <<"|1| Insert element"<<endl;
cout <<"|2| Remove element"<<endl;
cout <<"|3| Get element at specific position"<<endl;
cout <<"|4| Display list"<<endl;
cout <<"|5| End program"<<endl;

cin>> choice;
return choice;
}

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

int option=0, val=0, k=0;
 while (menu(option)!=5)
{
	switch(option)
	{
		case 1://insert
			cout<<"\n\nEnter value to be inserted: "<<;
			cin>>val;
			cout<<"\nEnter position"<<;
			cin>>k;
			L1.insert(val,k);
			cout<<"\n\nValue"<<val<<"was inserted in position"<<k<<endl;
			break;
 
		case 2: //remove
			cout<<"\n\nEnter position of value to be removed: "<<;
			cin>>k;
			L1.remove(k);
			cout<<"Value in "<<k<<" has been removed\nThe current number of elements in the list is "<<num_elements;
		        break;

		case 3://getat
			cout<<"\n\nEnter position of value to be found"<<;
			cin>>k;
			val=L1.getAt(k);
			cout<<"The value in position "<<k<<" is: "<<val;
			break;
		case 4://display
			break;
		default: cout<<"Error. Please enter a valid choice"<<endl;
	}//endswitch	
}//endwhile
}
