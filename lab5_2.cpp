#include <iostream>
#include <string.h>
using namespace std;

string mixText(string s1,string s2)
{
   int L1=s1.size();
   int L2=s2.size();
   if(L1!=L2)
   {
	   return "E";
   }
   else
   {
	   int i=0;
	   int j=0;
	   int k=0;
	   string m;
	   while(i<=2*L1)
	   {
		   if(i%2==0)
		   {
			   m=m+s1[j];
			   j++;
		   }
		   else
		   {
			   m=m+s2[k];
			   k++;
		   }
		   i++;
	   }
	   return m;
   }
   

}
int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

