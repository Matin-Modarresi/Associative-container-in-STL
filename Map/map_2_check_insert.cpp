#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<char,string> p={{'M',"matin"} , {'R',"reza"} , {'Z',"zahra"}};
	
	pair< map<char,string>::iterator , bool> check;
	
	check = p.insert(pair<char,string> ('M',"mohammad"));
	
	if(check.second) // check.second = false
	  cout << "Your elemant added\n";
	  
	    else
	    {
		
	     cout << "Your elemant exist\n";
	     cout << check.first->second << "\n" ;//matin
	     
	    }
	cout << p.at('R') << "\n";// reza
	p.at('R') = "rahim";
	cout << p.at('R'); // rahim 
}
