#include "Text.h"

Text::Text(string t, int s) : text(t), fontSize(s){

}

Text::~Text(){

}

void Text::print(){
	cout << "Font size: " << fontSize << " - Text: " << text << endl;
}

void Text::resize(int newSize){
	fontSize += newSize;
}
