//*******************************************************************************
// Course Number and Section:  CSCI 1380 - 04
// Course Semester: Fall 2022
// Your Name: Luis Trevino
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
//
//    find the volume of a hemisphere
//
//*******************************************************************************

// libraries
//library for inputs  and outputs
#include <iostream> 
//library to be able to use string
#include<string>
//library for file inputs and outputs
#include<fstream>
// library for manipulating imputs and outputs
#include<iomanip>

//	DO NOT MODIFY THE LINE BELOW
#include <limits>

using namespace std;

//declare the constant variable "pi"
const float pi = 3.1415;

int main() {

	//declare variables
	// "name"string variable
	string name;
	//"radius interger variable
	int radius;
	//"volume" double variable
	double volume;

	// declare fstream variable
	// variable for writing into files
	ifstream inFileA;
	// variable for reading from files
	ofstream outFile;

	//open file
	inFileA.open("file1.txt");

	//if filenot detected send error
	if (!inFileA) {
		cout << "Error Opnening The File" << endl;
		return-1;
	}
	
	// find a string in file for name
	inFileA >> name;
	//find a number in the file for radius
	inFileA >> radius;

	// keep the numbers in decimal
	cout << fixed;
	// use the formula to calculate the volume
	volume =  (static_cast<double>(2)/static_cast<double>(3)) * (static_cast<double>(pi)) * (static_cast<double>(radius)) * (static_cast<double>(radius)) * (static_cast<double>(radius));
	//round the volume to it nearest 10th
	volume = static_cast<double>(static_cast<int>((volume * 10.0) + 0.5)) / 10.0;
	// display only 2 digits after the decimal point
	cout << setprecision(2);

	// print "OK [name]"
	cout << "OK, " << name << endl << endl;
	//print "The volume of a hemisphere of a radius [radius] is [volume]"
	cout << "The volume of a hemisphere of a radius " << radius << " is " << volume << endl << endl;
	// print "press any key to continue..."
	cout << "Press any key to continue...";

	//close file
	inFileA.close();

	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//terminate the program
	return 0;
}

