#ifndef _STUDENTS_HPP
#define _STUDENTS_HPP

#include<list>


#include"Person.hpp"

class Students {
public:
	Students() = default;
	Students(std::size_t hh):how_many(hh) {}

	virtual void add_back( const BaseStudent pp);
	virtual int rm_of(const BaseStudent &pp);
	virtual const BaseStudent & find( std::string id);

	virtual ~Students() = default;

private:
	std::list<BaseStudent> stu;
	std::size_t how_many;
};




#endif /* _STUDENTS_HPP */



