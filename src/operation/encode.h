/*!
 * ribs
 * Copyright (c) 2013-2014 Nicolas Gryman <ngryman@gmail.com>
 * LGPL Licensed
 */

#ifndef __RIBS_OPERATION_ENCODE_H__
#define __RIBS_OPERATION_ENCODE_H__

#include "../operation.h"

namespace ribs {

OPERATION(Encode,
	Image*             image;
	std::vector<uchar> outVec;
	std::string        format;
	uint32_t           quality;
);

}

#endif