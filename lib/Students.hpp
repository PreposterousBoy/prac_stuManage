#ifndef _STUDENTS_HPP
#define _STUDENTS_HPP

#include<list>

#include"Person.hpp"


class Students;


class Students {
public:
	Students() = default;
	
	virtual Students& add_back(BaseStudent pp);
	virtual BaseStudent pop_back();
	virtual BaseStudent pop_front();
	/*
	virtual Students& removeOf(const BaseStudent &pp);
	virtual const BaseStudent & find( std::string nname);
	virtual const BaseStudent & find(std::string id, int iid);
	virtual std::list<BaseStudent>::const_iterator find(const BaseStudent &&pp);*/

	std::list<BaseStudent>::const_iterator getBegain() const;
	std::list<BaseStudent>::const_iterator getEnd() const;
	virtual bool is_empty()const;
	virtual const std::size_t size() const;

	virtual ~Students() = default;

protected:
	std::list<BaseStudent> stu;
};






class MutexStudents{
public:
	


private:
};


#endif /* _STUDENTS_HPP */



