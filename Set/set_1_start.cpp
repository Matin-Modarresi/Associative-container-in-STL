#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s = { 1,4,5,3,2};
	s.insert(6);
	s.insert(7);
	s.insert(2); // No error. without effect.
	// s = 1 2 3 4 5 6 7 ->  ordered
	set<int>::iterator itr; 
	
	s.erase(5); // s = 1 2 3 4 6 7
	itr = s.find(6);  // find 6 address
	s.erase(itr , s.end()); // 1 2 3 4
	
	cout << s.size() << "\n"; // 4
	
//	cout << s.capacity();  error
	 
	for(itr=s.begin() ; itr!=s.end() ; itr++)
	 cout << *itr << " "; 
	 
	 
}
