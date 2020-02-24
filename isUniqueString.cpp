#include <iostream>
using namespace std;

bool isUnique(string str)
{
	    bool charset[128] = {false};
	        if(str.length() > 128)
			    return false;
		    
		    for(char ch : str)
			        {
					        if(charset[ch] == true)  
							            return false;
						        else{
								            charset[ch] = true;
									            }
							    }
		        
		        return true;
			    
}

int main() {
		
		string str = "srushti";
			bool result = isUnique(str);
				cout<<result;
					
					
					return 0;
}

