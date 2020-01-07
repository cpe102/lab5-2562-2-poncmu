#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N;
	cout<<"Enter number of student ";
	cin>>N;
	string name[N];
	int age[N];
	int i=0;
	while(i<N)
	{
       cout<<"Name of student "<<i+1<<" ";
       cin>>name[i];
	   cout<<"Age of student "<<i+1<<" ";
	   cin>>age[i];
		i++;
	}
	int searchage;
	cout<<"Enter an age to search ";
	cin>>searchage;
	int j=0;
	while(j<N)
	{
        if(searchage==age[j])
		cout<<name[j]<<endl;
		j++;
	}


	return 0;
}