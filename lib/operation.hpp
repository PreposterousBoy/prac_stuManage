#ifndef __OPERATION_HPP
#define __OPERATION_HPP
#include<iostream>
#include<string>
#include<vector>



/**
 * BaseClass 提供选项都有的特性
 *
 */
class BaseOption{
public:
	BaseOption();
	//BaseOption(std::string& n, std::string& d):_name(n),_description(d) {}


	virtual int Execute();
	virtual const std::string& Info() const ;
	virtual const std::string& Name() const ;

	virtual ~BaseOption();


private:
};

/**
 * 登陆的选项
 *
 */
class SignOption:public BaseOption{
public:
	SignOption() = default;
	//SignOption(std::string& n, std::string& d):BaseOption(n,d) {} 


	int Execute() override;
	const std::string& Info() const override;
	const std::string& Name() const override;
	SignOption& Loggin(std::string idd, std::string pwd);
private:
	bool IdentifyUser(std::string nn);
	bool Encrypt(std::string psw);

private:
	static std::string _SuperUser;
	static std::vector<std::string> _StuSignInfo;
	std::string _name = "Loggin";
	std::string _description = "user login interface";

};



/**
 * 搜索
 *
 */
class SearchOption:public BaseOption {
public:
	SearchOption() = default;
	int Execute() override;
	const std::string& Info() const override;
	const std::string& Name() const override;


private:
	std::string _name = "Searching";
	std::string _description = "Searcing the Data Base";


};

/**
 * 系统信息
 *
 */
class InformationOption: public BaseOption{
public:
	int Execute() override;
	const std::string& Info() const override;
	const std::string& Name() const override;


private:

	const std::string sysInfo;
	const std::string sysVersion;
	const std::string sysCapacity;
	std::string _name = "Information";
	std::string _description = "give more info";

};


#endif 
