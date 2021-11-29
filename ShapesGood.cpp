//Adam Bayley 19ahb 20176309

#include "string"
#include "ShapesGood.h"
#include <ostream>
#include <iostream>

using namespace std;
/*need:
 * constructors <-- DONE
 * getters <-- DONE
 * destructors <-- DONE
 * draw methods (cout <<...) <-- DONE
 */


//getter methods
int Shape::getLength() const {
    return this-> length;
}

int Shape::getWidth() const {
    return this->width;
}

string Fillable::getFillableColor() const {
    return this-> fillableColor;
}

string Text::getText() const {
    return this-> text;
}

//destructors
Shape::~Shape() {}

Fillable::~Fillable() {}

Text::~Text() {}

Square::~Square(){}

FilledSquare::~FilledSquare(){}

FilledTextSquare::~FilledTextSquare(){}

Circle::~Circle(){}

FilledCircle::~FilledCircle(){}

Arc::~Arc(){}


//Parent Constructors
Shape::Shape(int length, int width) {
    this->length = length;
    this->width = width;
}

Fillable::Fillable(string color) {
    this->fillableColor = color;
}

Text::Text(string text) {
    this->text = text;
}

//Derived stuff:
//Squares:
Square::Square(int length, int width, string outlineColor): Shape(length, width){
    this->outlineColor = outlineColor;
}

string Square::getOutlineColor() const { //getter for outline color
    return this->outlineColor;
}

void Square::draw() {
    cout << "Drawing a square with length " << getLength() << " and width: " << getWidth() <<endl;
}

//Filled Squares:
FilledSquare::FilledSquare(int length, int width, string outlineColor, string fillableColor): Square(length,width, outlineColor), Fillable(fillableColor)  {}

 void FilledSquare::draw() {
    cout << "drawing a Filled Square with length " << getLength() << " width: " << getWidth() << " outline: "<< getOutlineColor() << " and fill color: " << getFillableColor() << endl;

}

//Filled Text Squares:
FilledTextSquare::FilledTextSquare(int length, int width, string outlineColor, string fillableColor, string text): Square(length, width, outlineColor), Fillable(fillableColor), Text(text) {}

void FilledTextSquare::draw(){
    cout << "drawing a Filled Text Square with length " << getLength() << " width: " << getWidth() << " outline color: "<< getOutlineColor()<< "  fill color: " << getFillableColor() << " and Text: " << getText() << endl;

}

//Circle:
Circle::Circle(int length, int width, string outlineColor): Shape(length, width) {
    this->outlineColor = outlineColor;
}
string Circle::getOutlineColor() const{ //getter for outline color
    return this->outlineColor;
}
void Circle::draw(){
cout << "Drawing a circle with length " << getLength() << " width: " << getWidth() << " and outline color: " << getOutlineColor() <<endl;
}

//Filled Circle:
FilledCircle::FilledCircle(int length, int width, string outlineColor, string fillableColor): Circle(length, width, outlineColor), Fillable(fillableColor) {}

void FilledCircle::draw() {
    cout << "Drawing a circle with length " << getLength() << " width: " << getWidth() << " outline color: " << getOutlineColor() << " and filled color: " << getFillableColor() <<endl;

}

//Arc:
Arc::Arc(int length, int width, string outlineColor): Shape(length, width){
    this->outlineColor = outlineColor;
}

string Arc::getOutlineColor() const { //getter for outline color
    return this->outlineColor;
}

void Arc::draw() {
 cout << "Drawing an Arc with length: " << getLength() << " width: " << getWidth() << " and outline color: " << getOutlineColor()<<endl;
}
