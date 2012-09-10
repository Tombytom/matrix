#ifndef VALUE_H
#define VALUE_H

class Value
{
private:
	char value; // look below for possible values
	int flag; // 0: '0', 1: '1', -1: ' ' (hidden)
	
public:
	void setFlag (int flag);
	int getFlag();
	
	void setValue();
	char getValue();
	
	
	// Constructor
	Value();
};


#endif // VALUE_H