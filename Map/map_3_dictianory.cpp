#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
	multimap<string,string> dict; // elemant is ordered and we have several key 
	
	dict.insert( {
	             {"day","tag"} , {"car","Auto"} , {"trait","Merkmal"} , {"strange","fremed"} , 
               	 {"smart","elegant"} , {"smart" , "raffiniert"} , {"smart","klug"},
               	 {"clever","raffiniert"} , {"strang","seltsam"}
	           } );
	           
	           /**
			     English   German
                 car       Auto
                 clever    raffiniert
                 day       tag
                 smart     elegant
                 smart     raffiniert
                 smart     klug
                 strang    seltsam
                 strange   fremed
                 trait     Merkmal
			   
			   **/
	           
	    
	cout << left << setw(10) << "English" << "German" << endl;
	
	for(const auto& elem : dict)
	   cout << setw(10) << elem.first << elem.second << "\n";
	   
	   cout << "\n";
	   
  string word("smart");
  cout << word << ":\n";
  
  for(auto pos = dict.lower_bound(word) ; pos != dict.upper_bound(word) ; pos++)
      cout << pos->second << endl;
      
      
      /*
	    smart:
        elegant
        raffiniert
        klug
		
	*/
      
      cout << endl;
      
   word = "raffiniert";   
  for(const auto pos:dict)
    if(pos.second == word)
      cout << pos.first << "\n"; 
	
	/*
	clever
    smart
	*/
	  	
}
