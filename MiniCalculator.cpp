#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	string name;
	
	cout << "NAME : " << name ;
	getline(cin, name);
	
	int menu;
	double x = 0.0, y=0.0, z = 0.0;
	
	cout << "please enter two numbers : \n";
	cin >> x >> y ;
	cout << "your number is "<< x <<" and " << y << endl;
	cout << "please choose : \n 1. ADD\n 2. SUB \n 3. MULT\n 4. DIV\n";
	cin >> menu;
	
	
	switch (menu)
	{
		case 1: z = x + y;
		        cout << "your add is " << z ;
		        break;
		
		case 2: z = x - y;
		        cout << "your sub is " << z;
		        break;
		        
	    case 3: z = x*y;
		        cout << "your mult is "	<< z;   
				break;
				
	    case 4: z = x/y;
	            cout << "your  div is " << setprecision(4) << z;
	            break;
	            
	            
		        
		        
		        
		        
		        
		
	}
	

}
