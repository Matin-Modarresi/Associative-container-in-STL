#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main()
{
	set<int>s;
	set<int>::iterator l,h,itr;
	
	for(int i=0 ; i<9 ; i++)
	  s.insert(i); // 0 1 2 3 4 5 6 7 8
	  
	  l = s.lower_bound(4);  //4
	  h = s.upper_bound(7); //8
	  
	  cout << *l << "\n";
	  cout << *h << "\n";
	  
	  set<int>::key_compare c;
	  
	  c = s.key_comp();
	  
	  itr = s.begin();
	  
	  do{
	  	 cout << *itr << " "; // 0 1 2 3 4 5 6 7 8 
	  }while(c(*(itr++),*h)); //just with * ~ *(itr++) != *h  ~ itr++ != h
}
