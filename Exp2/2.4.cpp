#include<vector>
#include<fstream>

using namespace std;

int main(){
	ifstream fin;
	vector<string> v;
	fin.open("story.txt");
	string line;
	while(getline(fin,line)){
		if(line=="\0") continue;
		v.push_back(line);
	}
	fin.close();
	ofstream fout;
	fout.open("new_file.txt");
	for(int i = 0 ; i < v.size() ; i++){
		fout << v[i] << "\n";
		fout << "\n";
	}
	fout.close();
	return 0;
}
