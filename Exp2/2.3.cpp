#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main(){
	ifstream fin;
	vector<string> v;
	fin.open("story.txt");
	string line;
	int cno = 0;
	int lno = 0;
	while(getline(fin,line)){
		if(line=="\0"){
			cno++;
		}else{
			v.push_back(line);
			cno+=line.length();
			lno++;
		}
	}
	int lin=0;
	fin.close();
	cout << "Select a line you would like to delete: " << endl;
	for(auto i:v){
		cout << (++lin) << " " << i << endl << endl;
	}
	int choice;
	cout << "Enter your choice: ";
	cin >> choice;
	ofstream fout;
	fout.open("new_story.txt");
	for(int i = 0 ; i < v.size() ; i++){
		if(i==choice-1) continue;
		fout << v[i] << "\n";
		fout << "\n";
	}
	fout.close();
	return 0;
}
