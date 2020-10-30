#include <iostream>
#include <string>

class viewConsole(){
	private:
		std::string currentPoint=0;	
    
	public:		
	viewConsole(){
		
	}
	
	void LoginForm(){
		currentPoint=0;
	}
	
	void LoginFormPassword()
	{
		currentPoint=1;
	}		
	
	void SuccessFullLoginInfo(){
		currenPoint=2;
	}
	
	void UnsuccessfulLogin(){
		currentPoint=0;
	}
	
}