#include "help.hpp"

/**
 * class Entry
 *
 *
 */

Entry& Entry::GetEntry(EntryOption& op){
	static Entry entricen(op);
	return entricen;
}

Entry& Entry::Display(EntryOption& eop) {
	eop.GetOption();
	return *this;
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


