
/* A program to generate mathematical tan (x) with numerical tan (x) obtained with Maclaurin series.

INCLUDE LIBRARIES*/

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// START THE MAIN FUNCTION

int main(int argc, char* argv[])
{

	// DECLARE VARIABLES
	double i,x,y,delta;

	cout<<argv<<"\n";

	// OPEN up a file *.CSV to write data (already created)
  std::ofstream output;
    //Route of my *.csv file:   
	output.open("C:/Users/data.csv");
  
if(!output.is_open())
 {
     std::cout << " File not opened \n"; // To validate if the file was opened.
    
	 // stop the program here
    throw;
  }
  
  /* write HEADINGs on the file
            COLUMN 1              COLUMN 2               COLUMN 3                       COLUMN 4*/
  output << "RADIANS (X)" << " , " << "Tan (X)" << " , " << "Maclaurin series" << " , " << "Delta" <<std::endl;

 // GENERATE DATA

  // Range of X: [-0.5, 0.5] (In radians), to generate 100 data, increments must be 0.01
    for( i=-.5;i<=0.51;i=i+0.01)
  {

	// CALCULATE mathematical tan (X), numerical tan (X) and delta
	x= tan(i);				// Column 2
	y= (i + (pow(i,3)/3));	// Column 3
	delta= x-y;				// Column 4
   
	// Write de results in *.CSV file
	/* 
            COLUMN 1     COLUMN 2      COLUMN 3         COLUMN 4
		    RADIANS(X)    Tan (X)   Maclautin Series      Delta*/
     output << i << " , " << x << " , " << y << " , " << delta <<std::endl; 
  }
  // Validate if file was written
  std::cout << " File write successful \n";
  
  // CLOSE file
  output.close();
  
  system("pause");
  return 0;

}
