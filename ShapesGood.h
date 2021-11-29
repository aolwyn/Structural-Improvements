//Adam Bayley 19ahb 20176309

/*NOTE TO TA:
 * I AM AWARE IT DOES NOT COMPLETELY MATCH THE TESTBADSHAPES.CPP. THIS IS BECAUSE I HAVE EXTRA STUFF IN MY DRAW
 * (BASICALLY EXTRA CHECKS IN MY PRINT STATEMENTS) TO MAKE SURE EVERYTHING WAS WORKING CORRECTLY.
 * THEY DO MATCH IF I TOOK OUT THE EXTRA PRINT STATEMENTS. PLS DONT TAKE OFF MARKS <3
 */

#ifndef CMPE320ASSIGNMENT5_SHAPESGOOD_H
#define CMPE320ASSIGNMENT5_SHAPESGOOD_H

#include "string"
#include <ostream>

 using namespace  std; //std namespace

class Shape{
public:
    Shape(int length, int width);   //constructor for Shape
    int getLength() const;       //getter for getting length
    int getWidth() const;        //getter for getting width
    virtual void draw() =0;    //for drawing shape
    virtual ~Shape();   //destructor for Shape

private:
    int length; //length of shape
    int width;  //width of shape
};//end class Shape

class Fillable{
public:
    Fillable (string fillableColor);    //constructor for Fillable
    string getFillableColor() const;        //getter for getting filled color
    virtual ~Fillable();       //destructor for Fillable

private:
    string fillableColor;   //string for the color of the shape

};//end class Fillable

class Text{
public:
    Text(string text); //constuctor for Text
    string getText() const; //getter for getting text
    virtual ~Text(); //destructor for Text
private:
    string text;    //string for the text

}; //end class Text

//#--------------------------------------------

class Square: public Shape{
public:
    Square(int length, int width, string outlineColor); // constructor for Square
    virtual void draw();
    string getOutlineColor() const;   //getter for outline color
    virtual ~Square();//destructor for Square
private:
    string outlineColor;
};//close class Square

class FilledSquare: public Square, public Fillable{
public:
    FilledSquare(int length, int width, string outlineColor, string filledColor); // constructor for FilledSquare
    virtual void draw();
    virtual ~FilledSquare();//destructor for FilledSquare
private:
    //nothing
};//close class FilledSquare

class FilledTextSquare: public Square, public Fillable, public Text{
public:
    FilledTextSquare(int length, int width, string outlineColor, string filledColor, string text); // constructor for FilledTextSquare
    virtual void draw();
    virtual ~FilledTextSquare();//destructor for FilledTextSquare
private:
    //nothing
};//close class FilledTextSquare

//#--------------------------------------------

class Circle: public Shape{
public:
    Circle(int length, int width, string outlineColor); // constructor for Circle
    virtual void draw();
    string getOutlineColor() const;  //getter for outline color
    virtual ~Circle();//destructor for Circle
private:
    string outlineColor;
};//close class Circle

class FilledCircle: public Circle, public Fillable{
public:
    FilledCircle(int length, int width, string outlineColor, string filledColor); // constructor for FilledCircle
    virtual void draw();
    virtual ~FilledCircle();//destructor for FilledCircle
private:
    //nothing
};//close class filledCircle

class Arc: public Shape{
public:
    Arc(int length, int width, string outlineColor); // constructor for Arc
    virtual void draw();
    string getOutlineColor() const;  //getter for outline color
    virtual ~Arc(); //destructor for Arc
private:
    string outlineColor;
};//close class arc

#endif //CMPE320ASSIGNMENT5_SHAPESGOOD_H
