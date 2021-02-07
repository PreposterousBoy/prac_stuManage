
#include<iostream>
#include<string>
#include<fstream>

#include"Person.hpp"
#include"IO.hpp"

BaseStudent IOstream::getPerson() {
	std::string tmp_string;
	BaseStudent tmp;
	if(!file.is_open()) {
		// to do
	}

	
}

Sex recog_sex(int x) { 
	switch(x){
	case 0:
		return Sex::Femal;
	case 1:
		return Sex::Male;
	case 2:
		return Sex::Unkown;
	default:
		return Sex::Unkown;
	}
}

IOstream& IOstream::readAll(Students& database) {
	//ptr_stu = std::make_shared<BaseStudent>();
	buff buffer;
	if( !file.is_open()){
		std::cout<<"file isn't open"<<std::endl;
		return *this;
	}
	while( file>>buffer.name>>buffer.id>>buffer.email>>buffer.phone>>buffer.adrr>>buffer.sex>>buffer.year){
		BaseStudent tmp(buffer.name,buffer.id);
		tmp.set_email(buffer.email).set_phone(buffer.phone).set_years(buffer.year).set_Sex( recog_sex(buffer.sex));
		database.add_back(tmp);
	}

	return *this;

}


IOstream& IOstream::writeOut(const BaseStudent& os){
	file<<os.get_name()<<" "<<os.get_id()<<" "<<os.get_email()<<" "<<os.get_phone()<<" "<<os.get_addr()<<" "<<os.get_sex()<<" "<<os.get_years()<<std::endl;
	if(file.bad()){
		std::cout<<"write fail"<<std::endl;
		return *this;
	}
	return *this;
}

IOstream& IOstream::wirteAll(Students& database) {
	if ( !file.is_open() ){
		// throw exception
		return *this;
	}

	while( !database.is_empty()){
		auto tmp = database.pop_front();
		writeOut(tmp);
	}
	return *this;

}
