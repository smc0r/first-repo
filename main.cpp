#include "main.h"
class whyudoubtedme
{
public:
	static bool dreams = false;
	static bool is_there_any_dream();	
};

bool whyudoubtedme::is_there_any_dream()
{
	return false;
};

int main()
{
	// still same
	bool sameold = whyudoubtedme::is_there_any_dream();
};
