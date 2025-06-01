#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream; // read data from file
using std::ofstream; // write data to file
#include <filesystem>
using namespace std::filesystem; // check directories and files

/* read arguments of folder
	sort through folder and pull out each photo
	set into new folder

*/

// function to check if file is available or if it is inside another folder
void checkFile (string folder)
{
	path directoryPath = folder;

	if (exists(directoryPath) && is_directory(directoryPath)) {
		for (const auto& entry : directory_iterator(directoryPath)) {
			cout << "file is " << entry.path() << '\n';
		}
	} else cout << "Not a directory";
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
	return {};
}

int main(int argc, char *argv[]){
	// allow flags for user to create new folder, delete old folder, etc

	string s;
	cout << "Welcome to the photo organizer\n";
	cout << "Please enter the path for the folder that you want to organize ";
	cin >> s; // this is going to be a string of the path to the folder

	cout << "\nSo " << s << " is what you want to update?";

	checkFile(s);
}
