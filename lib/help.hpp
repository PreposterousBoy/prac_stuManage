#ifndef __HELP_CPP
#define __HELP_CPP

class Entry;
class EntryOption;
class Option;


/**
 * Singleton Class Entry
 *
 */
class Entry {

public:
	static Entry& GetEntry(EntryOption& op);

	Entry& Display(EntryOption& eop);

private:
	Entry() = default;
	Entry(const Entry& en);
	Entry(const EntryOption& eop);
};


class BaseOption{
public:
	BaseOption() = default;
	virtual int Execute();


	virtual ~BaseOption();
};



class EntryOption {
public:
	EntryOption() = default;
	virtual ~EntryOption();

	virtual EntryOption& GetOption();
	virtual EntryOption& AccessOption(BaseOption& op);

};



#endif /* __HELP_CPP */











