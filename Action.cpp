#include "Action.h"
Action::Action() 
{
	std::cout << "Action()" << std::endl;
}
Action::Action(std::string str ) :type(str)
{
	std::cout << "Action(str)" << std::endl;
}
bool Action::execute()
{
	std::cout << "Execute()" << std::endl;
	return 0;
}
	Action::~Action()
{
	std::cout << "~Action()" << std::endl;
}
std::string Action::getActionType()
{
	return type;
}