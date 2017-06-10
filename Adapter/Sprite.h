#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <string>
using namespace std;

class Sprite {
public:
	//Againg our explicit constructor.
	explicit Sprite(string fileN, int w = 100, int h = 200);
	//And our virtual destructor
	virtual ~Sprite();
	
	//Time to set and then implement the methods.
	virtual void draw() override;
	virtual void resize(float newSize) override;
	
	//Making setters and getter to take access to the private variables.
	void setWidth(int width){Sprite::width = width;}
	int getWidht() const { return width;}
	
	void setHeight(int height) { Sprite::height = height;}
	int getHeight() const { return height;}

	void setFileName(const string &fileName){Sprite::fileName = fileName;}
	const string &getFileName() const { return fileName;}

private:
	//Two unique variables for this derived class.
	int width, height;
	string fileName;
};



#endif //CSPRITE_H
