#include "Sprite.h"

Sprite::Sprite(string fileN, int w, int h) : width(w), height(h), fileName(fileN){

}

Sprite::~Sprite(){

}

void Sprite::draw(){
	cout << "Draw sprite: " << fileName << " -w: " << width << " -h: " << height << endl;
}

void Sprite::resize(float newSize){
	width *= newSize;
	height *= newSize;
}
