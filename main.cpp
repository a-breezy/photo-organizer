#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream; // read data from file
using std::iofstream; // write data to file

/* read arguments of folder
	sort through folder and pull out each photo
	set into new folder

*/

// function to check if file is available or if it is inside another folder
bool checkFile (string folder)
{
	// if folder call checkfile
	// else return the path to the folder
}

// function to organize the folder
vector<string> sort(string folder)
{
	// call check file to get to the actual image
	// once at the image add the path to the vector
	// create a new folder with all of the files
	// if flagged to delete original, delete original directory
}

int main(int argc, char *argv[]) 
{
	string s;
	cout << "Welcome to the photo organizer\n";
	cout << "Please enter the path for the folder that you want to organize ";
	cin >> n; // this is going to be a string of the path to the folder
}
