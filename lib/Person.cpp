
#include"Person.hpp"



std::vector<std::string> Student::get_info() const {
	std::vector<std::string> tmp;
	tmp.push_back(get_name());
	tmp.push_back(get_id());
	tmp.push_back(get_phone());
	tmp.push_back(get_addr());
	tmp.push_back(get_email());
	tmp.push_back(std::string(get_years()));
	tmp.push_back(std::string(get_sex());
	return tmp;
}

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
const std::string BaseStudent::get_email() const {
	return email;
}

inline
const std::size_t BaseStudent::get_years() const {
	return years;
}

inline
const Sex BaseStudent::get_sex() const {
	return sex;
}

bool operator==(const BaseStudent &a, const BaseStudent &b){
	return a.get_id() == b.get_id() && a.get_name() == b.get_name();
}

bool operator!=(const BaseStudent &a, const BaseStudent &b) {
	return a.get_id() != b.get_id() && a.get_name() != a.get_name();
}

bool operator>(const BaseStudent &a, const BaseStudent &b) {
	return a.get_name() > b.get_name();
}

bool operator<(const BaseStudent &a, const BaseStudent &b) {
	return a.get_name() < b.get_name();
}

std::istream& operator>>(std::istream& in, BaseStudent &b) {
	
}

std::ostream& operator<<(std::ostream& out, const BaseStudent &b){

}












