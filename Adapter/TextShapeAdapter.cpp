#include "TextShapeAdapter.h"

TextShapeAdapter::TextShapeAdapter(const Text &adaptee) 
	: Text(adaptee.getText(), adaptee.getFontSize()){

}

TextShapeAdapter::TextShapeAdapter(string t, int fontSize) : Text(t, fontSize){

}

TextShapeAdapter::~TextShapeAdapter(){

}

void TextShapeAdapter::draw(){
	//.....
	Text::print();
	//.....
}

void TextShapeAdapter::resize(float newSize){
	int textNewSize = static_cast<int>(newSize); //Casting from one float type to int.
	Text::resize(textNewSize);
}
