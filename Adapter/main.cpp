#include <iostream>
#include <string>
#include <vector> //Incuding vector to test.
#include "Shape.h"
#include "Sprite.h"
#include "Tile.h"
#include "Text.h"
using namespace std;

int main() {
	vector<Shape *> drawingElements; //Making container type vector.
	
	//Pointer to the vector because we wanna then add our characters to the vector container
	//Making our charactes and objects etc....
	Sprite *hero = new Sprite("hero.bmp"); 
	Sprite *monster = new Sprite("troll.bmp", 150, 300);
	Tile *floor = new Tile("map_tiles.bmp", 0);
	Tile *wall = new Tile("map_tiles.bmp");
	
	//Adding them with the push back operation.
	drawingElements.push_back(hero);
	drawingElements.push_back(monster);
	drawingElements.push_back(floor);
	drawingElements.push_back(wall);
	
	//Using this after...Think about this.
	Text hitPoints("HP: ", 12);
		//TODO add a text reporting level wifh font size 14
		//add text to drawingElements
	
	//Drawing our charactes and our game maps (floor, wall).
	for(auto itr = begin(drawingElements); itr != end(drawingElements); itr++){
		(*itr)->resize(1.2);
		(*itr)->draw();
	}

	return 0;
}
