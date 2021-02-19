#ifndef __HELP_CPP
#define __HELP_CPP
#include<vector>
#include<string>
#include<memory>
#include"operation.hpp"



class Entry;
class EntryOption;
class BaseOption;


/**
 * Singleton Class Entry
 *
 */
class Entry {

public:
	static Entry& GetEntry();
	
	Entry& Display();
	
	void PickOne();


private:
	Entry() = default;
	Entry(const Entry& en) = delete;
	Entry(const EntryOption& eop);

	static std::unique_ptr<EntryOption> allOp;

};


class EntryOption {
public:
	EntryOption();
	virtual ~EntryOption();

	virtual EntryOption& DisplayOption();
	virtual EntryOption& AccessOption(BaseOption& op);
	virtual EntryOption& AccessOption(int op);

private:

	virtual void Init();


	std::vector<BaseOption> e_opt;


};



#endif /* __HELP_CPP */











