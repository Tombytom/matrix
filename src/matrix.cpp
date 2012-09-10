#include "matrix.h"
#include <string>

int main()
{
	Print print;
	Value value;
	
	value.setFlag (1);
	cout << value.getFlag() << endl;
	
	value.setValue();
	cout << value.getValue() << endl;
	
}


