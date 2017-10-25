/*
 * FractalCreator.h
 *
 *  Created on: Oct 17, 2017
 *      Author: P3DR0
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <cstdint>
#include <memory>
#include <vector>
#include <stdint.h>
#include <math.h>
#include "Zoom.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
private:
	int m_width;
	int m_height;
	int m_total { 0 };
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;

	vector<int> m_ranges;
	vector<RGB> m_colors;
	vector<int> m_rangeTotals{0};

	bool m_bGotFirstRange{false};

private:
	void calculateIterations();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitmap(string name);

public:
	void run(string name);
	void addRange(double rangeEnd, const RGB& rgb);
	int getRange(int iterations) const;
	FractalCreator(int width, int height);
	void addZoom(const Zoom& zoom);
	virtual ~FractalCreator();

};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
