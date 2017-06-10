#include "TextShapeAdapter.h"

void TextShapeAdapter::draw() {
    // ...
    adaptee->print();
    // ...

}

void TextShapeAdapter::resize(float newSize) {
    int textNewSize = static_cast<int>(newSize * adaptee->getFontSize());
    adaptee->resize( textNewSize );
}

