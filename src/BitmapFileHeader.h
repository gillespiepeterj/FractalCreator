/*
 * BitmapFileHeader.h
 *
 *  Created on: Oct 6, 2017
 *      Author: P3DR0
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>
#include <stdint.h>

using namespace std;

#pragma pack(2)

namespace caveofprogramming{

struct BitmapFileHeader{
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};

}

#endif /* BITMAPFILEHEADER_H_ */
