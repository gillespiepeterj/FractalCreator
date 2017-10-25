//============================================================================
// Name        : Fractals.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace std;
using namespace caveofprogramming;

int main() {

	FractalCreator fractalCreator(800, 600); // Creates 800 x 600 pixel fractal object.

	fractalCreator.addRange(0.0, RGB(47, 126, 255)); // Far background Color (Blue).
	fractalCreator.addRange(0.05, RGB(204, 0, 0)); // Middle background color (Red).
	fractalCreator.addRange(0.08, RGB(0, 255, 0)); // Background color closest to tentacles (Green).
	fractalCreator.addRange(1.0, RGB(255, 255, 255)); // Tentacles color (White).

	fractalCreator.addZoom(Zoom(295, 202, 0.1)); //1st Zoom Coordinates. GIMP Y coordinates start at the bottom and increase up.
	fractalCreator.addZoom(Zoom(312, 304, 0.1)); //2nd Zoom Coordinates.

	fractalCreator.run("test.bmp");

	cout << "finished" << endl; //Indication program is done.

	return 0;
}
