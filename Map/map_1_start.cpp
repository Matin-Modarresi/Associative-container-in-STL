#include <iostream>
#include <map>
using namespace std;


int main()
{
	
	map<char,int> p = { {'m',89} , {'m',90} , {'b',7} , {'z',9} , {'e',89}};   // first elemant is kye; for example m,b,z,e and c are key
	                                                                          // in the map all elemants is sorted by key
	   //b:7                                                                 // just {'m',89} is considered
	  // c:4                                                          
	 //  e:89
   	//   m:89
   //    z:9                                                                  
	map<char,int>::iterator it;
	
	p.insert(pair<char,int>('c',4));
	
	p.erase('m'); // erase {'m',89}
	
	it = p.find('e');
	
	cout << it->first << " -> " << it->second << "\n"; // e -> 89
	
	for(it = p.begin() ; it != p.end() ; it++)
	  cout << it->first << ":" <<  it->second << "\n"; 

	  
	
	  
	  
}
