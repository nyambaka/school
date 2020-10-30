#include <vector>
#include <string>
#include <iostream>

class form{
	
	private:
		
	int code;
	int name;
	std::vector<int>streams;
	
	public:	
		
	form(int name=0,int code=0);
	form();
	
	friend std::ostream& operator<<(std::ostream &o,form * const& formPointer);
	friend std::ostream& operator<<(std::ostream &o,form const& formPointer);
	int insertForm();
	
	std::vector<int> getStreams();
	
	int checkStreams(int number=-1);
	
};


