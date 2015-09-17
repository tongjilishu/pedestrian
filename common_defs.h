/* Standard headers */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/* openCV headers */
#include <opencv2/core/ocl.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgproc.hpp>

/* Wrapper TYPES */
#ifndef TYPES
enum TYPES = {PEDESTRIANS, CYCLES, CARS};
#endif