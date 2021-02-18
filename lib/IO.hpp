#ifndef _IO_HPP
#define _IO_HPP

#include<iostream>
#include<string>
#include<fstream>
#include<memory>

#include"Person.hpp"
#include"Students.hpp"



namespace stuSys{
struct buff {
	std::string name,id, email, adrr, phone;
	int sex;
	int year;
};

class IOstream{
public:
	IOstream() = default;
	IOstream(std::string& filename):file(filename) {}
	
	virtual IOstream& readAll(Students& database);
	virtual IOstream& writeOut(const BaseStudent& out);
	virtual IOstream& wirteAll(Students& database);

private:
	std::fstream file;
	std::ofstream ofile;
	std::shared_ptr<BaseStudent> ptr_stu;
	
	

};
};
#endif /* _IO_HPP */

