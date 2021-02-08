#include<iomanip>




#include"Person.hpp"



inline
const std::string BaseStudent::get_name() const{
	return _name;
}

inline
const std::string BaseStudent::get_id() const {
	return _id;
}

inline
const std::string BaseStudent::get_phone() const {
	return phone;
}

inline 
const std::string BaseStudent::get_addr() const {
	return addr;
}

inline
const std::string BaseStudent::get_email() const {
	return email;
}

inline
const std::size_t BaseStudent::get_years() const {
	return years;
}

inline
const int BaseStudent::get_sex() const {
	switch(sex){
	case Sex::Femal:
		return 0;
	case Sex::Male:
		return 1;
	case Sex::Unkown:
		return 2;
	default:
		return 2;
	}
}

inline
BaseStudent& BaseStudent::set_phone(std::string &pp) {
	phone = pp;
	return *this;
}

inline
BaseStudent& BaseStudent::set_addr(std::string &add) {
	addr = add;
	return *this;
}

inline
BaseStudent& BaseStudent::set_email( std::string &eemail) {
	email = eemail;
	return *this;
}

inline
BaseStudent& BaseStudent::set_years(std::size_t yy) {
	years = yy;
	return *this;
}

inline
BaseStudent& BaseStudent::set_Sex(Sex ss) {
	sex = ss;
	return *this;
}




bool operator==(const BaseStudent &a, const BaseStudent &b){
	return a.get_name() == b.get_name();
}

bool operator!=(const BaseStudent &a, const BaseStudent &b) {
	return a.get_id() != b.get_id();
}

bool operator>(const BaseStudent &a, const BaseStudent &b) {
	return a.get_name() > b.get_name();
}

bool operator<(const BaseStudent &a, const BaseStudent &b) {
	return a.get_name() < b.get_name();
}

	

std::ostream& operator<<(std::ostream& out, const BaseStudent &b){
	int space = 5;
	int space1 = 10;
	out<<std::right<<std::setw(space1)<<"Name"<<std::left<<std::setw(space)<<b.get_name()<<std::endl;
	out<<std::right<<std::setw(space1)<<"ID"<<std::left<<std::setw(space)<<b.get_id()<<std::endl;
	out<<std::right<<std::setw(space1)<<"Sex"<<std::left<<std::setw(space)<<b.get_sex()<<std::endl;
	out<<std::right<<std::setw(space1)<<"YEAR"<<std::left<<std::setw(space)<<b.get_years()<<std::endl;
	out<<std::right<<std::setw(space1)<<"Phone"<<std::left<<std::setw(space)<<b.get_phone()<<std::endl;
	out<<std::right<<std::setw(space1)<<"Email"<<std::left<<std::setw(space)<<b.get_email()<<std::endl;
	return out<<std::right<<std::setw(space1)<<"Address"<<std::left<<std::setw(space)<<b.get_addr()<<std::endl;
	
}












