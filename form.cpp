#include "form.h"

form::form(int newCode,int newName){
    this->code=newCode;
	this->name=newName;

};


form::form(){
	this->code=0;
	this->name=0;
}


std::ostream& form::operator<<(std::ostream &o,form *  const& formPointer){	
	return o<<"name := "<<formPointer->name
	        <<std::endl
	        <<"code := "<<formPointer->code
	        <<std::endl;
}

std::ostream& form::operator<<(std::ostream &o,form const& formPointer){
	return o<<"name := "<<formPointer.name
	        <<std::endl
	        <<"code := "<<formPointer.code
	        <<std::endl;
}

std::vector<int> form::getStreams(){
	return this->streams;
}


int form::checkStreams(int streamNumber){
	return streamNumber;
}
