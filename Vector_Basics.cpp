//Sample code utilizing vector commands

#include <iostream>
#include <vector>

using namespace std;

void printvector(vector<int>* pnameOfVector) {
	cout << "nameOfVector:\t";
	for (int i = 0; i<pnameOfVector->size(); i++) {
		cout << "\t" << pnameOfVector->at(i); // print out the element located at the ith element
	}
	cout << endl;

	pnameOfVector->insert(pnameOfVector->begin(), 500); //example of how to use the insert function with pointers
	pnameOfVector->erase(pnameOfVector->begin()); //example of how to use the erase function with pointers
}



int main() {

	vector<int> nameOfVector; //create a vector called nameOfVector

	cout << "nameOfVector:\t"; // print out vector name

	for (int i = 0; i < 5; i++) {
		nameOfVector.push_back(i); //adds element i to the end of the vector and resizes it
		cout << "\t" << nameOfVector[i]; // print out the element located at the ith element
		// nameOfVector.at(i) wouldd achieve the same result as above
	}
	cout << endl;

	cout << "nameOfVector size\t" << nameOfVector.size() << endl; //return and print out the size of nameOfVector

	nameOfVector.insert(nameOfVector.begin() + 1, 5); // add the value 5 BEFORE the 2nd element in the vector

	printvector(&nameOfVector); //print vector after element is added

	nameOfVector.erase(nameOfVector.begin() + 1); //erase the 2nd element of vector nameOfVector

	printvector(&nameOfVector); //print vector after element is deleted

	nameOfVector.clear(); //clear all the elements of nameOfVector
	 
	printvector(&nameOfVector); //print the contents of the vector since it should be empty nothing should print

	cout << "Is the vector empty?\t" << nameOfVector.empty() << endl; // return a 0 if the vector is not empty return a 1 if the vector is empty

	return 0;
}