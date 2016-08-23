#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	vector <int> testvec;
	int num;
	for(int i=0;i<5; i++){
		cin >> num;
		testvec.push_back(num);
	}
	for(int i=0;i<5; i++){
		cout << testvec[i] << ' ';
	}
	
}
