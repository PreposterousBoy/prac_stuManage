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



// 这几个函数老是编译链接时发生了undefine ref to 
Students& Students::removeOf(const BaseStudent &pp){
	stu.remove(pp);
	return *this;
}


const BaseStudent& Students::find(std::string nname){
	auto tmp = std::find(stu.cbegin(), stu.cend(), BaseStudent(nname));
	return *tmp;
}

const BaseStudent& Students::find(std::string id, int iid){
	BaseStudent comp_tmp(id,1);
	auto tmp = std::find_if(stu.cbegin(), stu.cend(), [&comp_tmp](auto &a){ return !( a != comp_tmp); } );
	return *tmp;
}

std::list<BaseStudent>::const_iterator Students::find(const BaseStudent &&pp){
	return std::find(stu.cbegin(), stu.cend(), pp);
}

std::list<BaseStudent>::const_iterator Students::getBegain() const {
	return stu.cbegin();
}

std::list<BaseStudent>::const_iterator Students::getEnd() const {
	return stu.cend();
}

bool Students::is_empty() const  {
	return stu.empty();
}

const std::size_t Students::size() const {
	return stu.size();
}



