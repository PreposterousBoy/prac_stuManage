#include<iomanip>
#include<iostream>



#include "help.hpp"


/**
 * class Entry
 *
 *
 */



Entry& Entry::GetEntry(){
	static Entry entricen;
	allOp = std::make_unique<EntryOption>();
	return entricen;
}

Entry& Entry::Display() {
	allOp->DisplayOption();
	return *this;
}

void PickOne() {
	
}


/**
 * class Option
 *
 */
int BaseOption::Execute() {
	return 1;
}





/**
 * Class EntryOption
 *
 */

void EntryOption::Init() {
	e_opt.push_back(SearchOption());
	e_opt.push_back(SignOption());
	e_opt.push_back(InformationOption());
}



EntryOption::EntryOption() {
	Init();
}


EntryOption& EntryOption::DisplayOption() {
	unsigned long num = 40;	
	for( int a = 0; a < num; a++) {
		std::cout<<"*";
	}
	std::cout<<std::endl;

	int width = 5;
	for(int i = 0; i < e_opt.size(); i++){
		std::cout<<"***"<<std::setw(width)<<i<<". ";
		std::cout<<e_opt[i].Name();
		std::cout<<std::endl;
	}

	return *this;
}


EntryOption& EntryOption::AccessOption(int op){
	e_opt[op].Execute();
}
