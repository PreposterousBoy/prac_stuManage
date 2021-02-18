#include<iostream>
#include<string>
#include<algorithm>


#include"lib/Person.hpp"
#include"lib/IO.hpp"
#include"lib/Students.hpp"

using namespace std;
using namespace stuSys;
string path {"src/database.txt"};











int main(int argc, char *argv[])
{
	IOstream infile(path);
	Students db;
	infile.readAll(db);
	std::for_each(db.getBegain(),db.getEnd(),[](auto& a){
			std::cout<< a; });
	return 0;
}
















