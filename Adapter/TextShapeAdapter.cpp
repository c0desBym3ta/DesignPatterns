#include "TextShapeAdapter.h"

void TextShapeAdapter::draw(){
	adaptee->print();
}

void TextShapeAdapter::resize(float newSize){
	int textNewSize = static_cast<int>(newSize * adaptee->getFontSize());
	adaptee->resize(textNewSize);	
}






//--------------------------------------------------------------------------------------

/*
TextShapeAdapter::TextShapeAdapter(const Text &adaptee)
	:	Text(adaptee.getText(), adaptee.getFontSize()){

}

TextShapeAdapter::TextShapeAdapter(string t, int fontSize) : Text(t, fontSize){

}

TextShapeAdapter::~TextShapeAdapter(){

}

void TextShapeAdapter::draw(){
	//....
	Text::print();
	//....
}

void TextShapeAdapter::resize(float newSize){
	int textNewSize = static_cast<int>(newSize);
	Text::resize (textNewSize);
}

*/
