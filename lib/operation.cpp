
#include"operation.hpp"

/*
int SignOption::Execute() {
	std::string name;
	std::string psw;
	std::cout<<"Please Input your user Id:"<<std::endl;
	if(std::cin>>name) {
		throw ;
	}
	catch eception {
		
	}

	if( !IdentifyUser(name)){
		throw ;
	}
	
	

	return 9;
}

*/

const std::string& BaseOption::Info()const {
	static std::string info{"this is base op, cant operation"};
	return info;
}


int SignOption::Execute() {
	std::cout<<"pelase input your user id:"<<std::endl;
	std::cout<<"pelase input your psw:"<<std::endl;
}

inline
const std::string& SignOption::Info() const {
	return _description;
}

inline
const std::string& SignOption::Name() const {
	return _name;
}


int SearchOption::Execute() {
	std::cout<<"just a SearchOption "<<std::endl;
}

inline
const std::string& SearchOption::Info() const {
	return _description;
}

inline
const std::string& SearchOption::Name() const {
	return _name;
}

int InformationOption::Execute() {
	std::cout<<"this is information option"<<std::endl;
}

inline
const std::string& InformationOption::Info() const {
	return _description;
}


inline
const std::string& InformationOption::Name() const {
	return _name;
}
