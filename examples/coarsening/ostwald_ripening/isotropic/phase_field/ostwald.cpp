// ostwald.cpp 
// Example program for Ostwald ripening using MMSP
// Questions/comments to gruberja@gmail.com (Jason Gruber)

#include"ostwald.hpp"

std::string PROGRAM = "ostwald";
std::string MESSAGE = "isotropic phase field model for Ostwald ripening using MMSP";

typedef MMSP::grid<2,MMSP::vector<double> > GRID2D;
typedef MMSP::grid<3,MMSP::vector<double> > GRID3D;

#include"MMSP.main.hpp"
