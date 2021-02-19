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
	virtual int Execute();
	virtual const std::string& Info();
	virtual const std::string& Name();

	virtual ~BaseOption();
};

/**
 * 登陆的选项
 *
 */
class SignOption:public BaseOption{
public:
	SignOption() = default;
	int Execute() override;
	SignOption& Loggin(std::string idd, std::string pwd);
private:
	bool IdentifyUser(std::string nn);
	bool Encrypt(std::string psw);

private:
	static std::string _SuperUser;
	static std::vector<std::string> _StuSignInfo;

};



/**
 * 搜索
 *
 */
class SearchOption:public BaseOption {
public:
	SearchOption() = default;
	int Execute() override;

private:

};

/**
 * 系统信息
 *
 */
class InformationOption: public BaseOption{
public:
	int Execute() override;



private:

	const std::string sysInfo;
	const std::string sysVersion;
	const std::string sysCapacity;
};


#endif 
