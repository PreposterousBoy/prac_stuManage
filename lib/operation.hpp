#ifndef __OPERATION_HPP
#define __OPERATION_HPP
#include<iostream>
#include<string>


#include"help.hpp"


class SignOption:public BaseOption{
public:
	SignOption() = default;
	int Execute() override;
	SignOption& Loggin(std::string idd, std::string pwd);
private:
	bool IdentifyUser(std::string nn);
};


#endif 
