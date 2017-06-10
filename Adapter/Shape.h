#ifndef ADAPTER_SHAPE_H
#define ADAPTER_SHAPE_H

#include <iostream>
#include <string>

class Shape {
public:
	//Make our default constructor, in explicit way.
	explicit Shape(int ax = 0, int ay = 0);
	//Making the destructor virtual.
	virtual ~Shape();
	
	//Making our to methods pure virtual. Every class has its own way to use them.
	virtual void draw() = 0;
	virtual void resize(float newSize) = 0; //It's resizing, so need of newSize variable.
	
	//Making setters and getters methods because maybe we wanna change tha values.
	void setX(int x){Shape::x = x;}
	int getX()const {return x;}

	void setY(int x){Shape::y = y;}
	int getY() const { return y;}
protected:
	int x,y; //Proteted members because this base class will give access to other classes.

};

#endif //ADAPTER_SHAPE_H
