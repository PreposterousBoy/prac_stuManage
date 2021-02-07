#include"Students.hpp"


#include<algorithm>


Students& Students::add_back( BaseStudent pp) {
	stu.push_back(pp);
	return *this;
}

BaseStudent Students::pop_back() {
	BaseStudent tmp(stu.back());
	stu.pop_back();
	return tmp;

}

BaseStudent Students::pop_front() {
	BaseStudent tmp(stu.front());
	stu.pop_front();
	return tmp;
}

int Students::remove_of(const BaseStudent &pp){
	stu.remove(pp);
	return 1;
}

int Students::remove_of(const BaseStudent &&pp){
	stu.remove(pp);
	return 1;
}

const BaseStudent& Students::find(std::string nname){
	auto tmp = std::find(stu.cbegin(), stu.cend(), BaseStudent(nname));
	return *tmp;
}

const BaseStudent& Students::find(std::string id, int iid){
	auto tmp = std::find_if(stu.cbegin(), stu.cend(), [&iid](auto &a){ return !( a != iid); } );
	return *tmp;
}

std::list<BaseStudent>::const_iterator Students::find(const BaseStudent &&pp){
	return std::find(stu.cbegin(), stu.cend(), pp);
}

bool Students::is_empty() const  {
	return stu.empty();
}

const std::size_t Students::size() const {
	return stu.size();
}



