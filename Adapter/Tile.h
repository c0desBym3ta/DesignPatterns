#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

class Tile : public Shape{
public:
	//Constructor deconstructor
	explicit Tile(string fileN, int t = 1, int d = 50);
	virtual ~Tile();
	
	//Overriding the unique methods.
	virtual void draw() override;
	virtual void resize(float newSize) override;

	//our getter and setters methods.
	void setType(int type){Tile::type = type;}
	int getType() const{return type;}

	void setDim(int dim){Tile::dim = dim;}
	int getDime() const{return dim;}

	void setFileName(const string &fileName){Tile::fileName = fileName;}
	const string &getFileName() const { return fileName;}

private:
	//Attributes of our tile.
	int type;
	int dim;
	string fileName;
};


#endif //TILE_H
