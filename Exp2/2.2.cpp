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
	int words=0;
	for(auto i:v){
		for(int j = 0; j < i.length() ; j++){
			if(i[j]==' '){
				words++;
			}
		}
		words++;
	}
	cout << "Number of Characters: " << cno << endl;
	cout << "Number of Words:      " << words <<endl;
	cout << "Number of Lines:      " << lno << endl;
}
