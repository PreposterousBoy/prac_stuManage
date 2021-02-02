#ifndef _PERSON_H
#define _PERSON_H

#include<string>
#include<vector>
#include<iostream>


enum class Sex { Femal, Male, Unkown};

class BaseStudent{
public:
	BaseStudent() = default;
	BaseStudent(std::string &nn, std::string &iid, std::string &add, 
			std::string &pp, std::string &emm, std::size_t yy, Sex ss)
			:_name(nn), _id(iid), addr(add), phone(pp), years(yy), sex(ss){}
	BaseStudent(std::string &nn, std::string &idd, std::string add ="", std::string pp = "",
			std::string emm = "", std::size_t yy = 0, Sex ss = Sex::Unkown)
			:_name(nn), _id(idd), addr(add), phone(pp), email(emm), years(yy), sex(ss) {}


	virtual std::vector<std::string> get_info() const;
	virtual const std::string get_name() const;
	virtual const std::string get_id() const;
	virtual const std::string get_phone() const; // ?? 返回值 const和 成员函数const 两者 冲突 和关系是什么？
	virtual const std::string get_addr() const;
	virtual const std::string get_email() const;
	virtual const std::size_t get_years() const;
	virtual const Sex get_sex() const;
	virtual int set_phone(std::string &pp);
	virtual int set_addr(std::string &add);
	virtual int set_email(std::string &eemail);
	virtual int set_years(std::size_t yy);
	virtual int set_Sex(Sex ss);
	virtual ~BaseStudent() = default;
private:
	const std::string _name;
	const std::string _id;
	std::string addr;
	std::string phone;
	std::string email;
	std::size_t years;
	Sex sex;

};

bool operator==(const BaseStudent &a, const BaseStudent &b);
bool operator!=(const BaseStudent &a, const BaseStudent &b);
bool operator>(const BaseStudent &a, const BaseStudent &b);
bool operator<(const BaseStudent &a, const BaseStudent &b);
std::istream& operator>>(std::istream &in, BaseStudent &b);
std::ostream& operator<<(std::istream &out, const BaseStudent &b);




class Student: public BaseStudent{
public:
	Student() = default;

	std::vector<std::string> get_info() const override;



private:

};




#endif /* _PERSON_H */


