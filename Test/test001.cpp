/**
 * 测试程序
 *
 *
 *
 */

#include"../lib/help.hpp"
#include"../lib/operation.hpp"








int main(int argc, char *argv[])
{
	Entry& mainFram = Entry::GetEntry();
	mainFram.Display();
	return 0;
}
