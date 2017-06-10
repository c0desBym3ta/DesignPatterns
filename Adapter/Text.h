#ifndef TEXT_H
#define TEXT_H

//Here i will make comments when its necessary.

#include <iostream>
#include <string>
using namespace std;

class Text {
public:
	explicit Text(string t = "", int s = 8);
	virtual ~Text();

	virtual void print();
	virtual void resize(int newSize);

	//Getters/Setters methods.
	void setText(const string &text){Text::text = text;}
	const string &getText() const{return text;}	
	
	void setFontSize(int fontSize){Text::fontSize = fontSize;}
	int getFontSize() const { return fontSize;}

protected:
	//Unique Attributes
	string text;
	int fontSize;
};


#endif //TEXT_H
