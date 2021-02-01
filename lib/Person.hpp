#ifndef _PERSON_H
#define _PERSON_H

#include<string>
#include<vector>



class BaseStudent{
public:
	BaseStudent() = default;
	BaseStudent(std::string& nn, std::string iid):_name(nn), _id(iid){
	}

	virtual std::vector<std::string> get_info() const = 0;
	
	virtual std::string get_name() const;

	virtual std::string get_id() const;

	virtual std::string get_phone() const;
	virtual std::string get_addr() const;

	virtual ~BaseStudent() = default;
private:
	const std::string _name;
	const std::string _id;
	std::string addr;
	std::string phone;
};



class Student: public BaseStudent{
public:
	Student() = default;

	std::vector<std::string> get_info() const override;



private:

};




#endif /* _PERSON_H */


