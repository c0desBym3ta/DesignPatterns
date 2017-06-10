#include "Tile.h"


Tile::Tile(string fileN, int t, int d) : type(t), dim(d), fileName(fileN){

}

Tile::~Tile(){

}


void Tile::draw(){
	cout << "Tile type: " << type << " - dim: " << dim << endl;
}

void Tile::resize(float newSize){
	dim *= newSize;
}
