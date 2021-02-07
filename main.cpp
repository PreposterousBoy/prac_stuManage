#include<iostream>
#include<thread>
#include<string>


#include"lib/Person.hpp"
#include"lib/IO.hpp"
#include"lib/Students.hpp"

using namespace std;

string path {"src/database.txt"};


int main(int argc, char *argv[])
{
	IOstream infile(path);
	Students db;
	infile.readAll(db);
	return 0;
}



