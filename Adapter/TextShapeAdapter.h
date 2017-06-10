#ifndef CLASS_ADAPTER_TEXTSHAPEADAPTER_H
#define CLASS_ADAPTER_TEXTSHAPEADAPTER_H

#include <iostream>
#include <string>
#include "Text.h"
#include "Shape.h"
using namespace std;


//This will be our adapter.
//Making soe changes and save our previous class adapter source code to anothes txt file.
//We are going to implement our object adapter.
class TextShapeAdapter : public Shape, private Text{
public:
        //Our constructors/deconstructors.
	TextShapeAdapter(Text *adText) : adaptee(adText) {}
	TextShapeAdapter(string t, int fontSize) {adaptee = new Text(t, fontSize);}
	virtual ~TextShapeAdapter();

        //Overriding our methods.
        virtual void draw() override;
        virtual void resize(float newSize) override;

private:
	Text *adaptee;
};



#endif

