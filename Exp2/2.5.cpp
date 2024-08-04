#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

struct Student {
	string name;
	int marks;
};

int main(){
	int n;
	cout << "Enter the Number of Student: ";
	cin >> n;
	vector<Student> v(n);
	
	for(int i = 0 ; i < n ; i++){
		cout << "Enter the Name: ";
		cin >> v[i].name;
		cout << "Enter the marks: ";
		cin >> v[i].marks;
	}
	ofstream fout;
	fout.open("student_data.txt");
	for(int i = 0 ; i < n ; i++){
		fout << "Name:" << v[i].name << endl;
		fout << "Marks:" << v[i].marks << endl;
		fout << endl;
	}
	fout.close();
	cout << "Data is available in student_data.txt file" << endl;
	return 0;
}
