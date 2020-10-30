#include <iostream>
#include <cstring>
#include <vector>

int login(std::string username="", std::string password="");

typedef struct grading{
	int A;
	int B;
	int C;
	int D;
	int E;
}grading;


typedef struct subject{
	int subjectCode;
	std::string name;
	int customGrade;
	grading grade;
	int marks;
}subject;

typedef struct stream{
	int code;
	std::string name;
}stream;



typedef struct teach{
	int formCode;
	int streamCode;
	int subjectCode;
}teach;


typedef struct result{
	int school;
	int student;
	int term;
	int stream;
	int subject;
	int form;
	int marks;
}result;

typedef struct teacher{
	int code;
	std::string name;
	std::string Initials;
	teach teaches;
}teacher;

typedef struct student{
	std::string uniqueId;
	std::string name;
	std::string registrationNumber;
	int formCode;
	std::vector<int>subjectCodes;
	std::vector<int>streamCodes;
	int subjectNumber;	
}student;

typedef struct user{
	std::string username;
	std::string password;
	int priviledgeLevel;
	bool login;
}user;


typedef struct school{
	student students;
	teacher teachers;
	subject subjects;
	int code;
	int Name;
}
school;

typedef struct remarks{
	std::string A;
	std::string B;
	std::string C;
	std::string D;
	std::string E;	
}remarks;

int main(int argc, char** argv)
{
	std::vector<student>students;
	student tempStudent;
	tempStudent.name="nelson nyambaka";
	students.push_back(tempStudent);
	std::cout<<students.size();
	return 0;
}

int login(std::string username, std::string password)
{
	int isCorrect = 2;

	if (username == "nelson")
	{
		isCorrect -= 1;
	}

	if(password == "12")
	{
		isCorrect -= 1;
	}
	return isCorrect;
		
}