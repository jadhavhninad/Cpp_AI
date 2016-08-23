#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Adding a comment.

void next_move(int posr, int posc, vector <pair<int, pair<int, int>>> dirt) {
    //add logic here
    cout << posr;
    cout << posc;
    cout << endl;
   // int ds= dirt.size();
    
   for (vector <pair<int, pair<int, int>>>::const_iterator i = dirt.begin(); i != dirt.end(); ++i){
   //for(int i=0; i< ds; i++ ){
		cout<< "distance = " << i->first << " ,x-cord = " << i->second.first <<  " ,y-cord= " << i->second.second << endl;
		
		 int next_dirt_row = i->second.first;
		 int next_dirt_col = i->second.second;
		 
		 if(posc < next_dirt_col){
			while(posc!=next_dirt_col){
				cout << "RIGHT" << endl;
				posc++;
			}
		}
		else if(posc > next_dirt_col){
			while(posc!=next_dirt_col){
				cout << "LEFT" << endl;
				posc--;
			}
		}
		
		 if(posr < next_dirt_row){
			while(posr!=next_dirt_row){
				cout << "DOWN" << endl;
				posr++;
			}
		}
		else if(posr > next_dirt_row){
			while(posr!=next_dirt_row){
				cout << "UP" << endl;
				posr--;
			}
		}
		
		cout << "Reached dirt. Now will look for next dirt" << endl;
    }
    
   
}

vector<int> findLocation(const string& sample, char findIt)
{
    vector <int> characterLocations;
    int ss = sample.size();
    //int vecCounter = 0;
    
    for(int q=0; q < ss; q++){
        if(sample[q] == findIt){
        //cout << q << "-";
        characterLocations.push_back(q);  
        //cout << characterLocations[vecCounter];
        //vecCounter++; 
		}
	}

    return characterLocations;
}

int main(void) {
    int pos[2];
    vector <string> board;
    vector <pair<int, pair<int, int>>> dirt;
    string s;
    vector <int> dirtLoc;
    int dirt_x, dirt_y, dirt_dist,dirtLocSize;
    
    cin>>pos[0]>>pos[1];
    
    for(int i=0;i<5;i++) {    
        cin >> s;
        
        dirtLoc = findLocation(s,'d');
        dirtLocSize = dirtLoc.size();
        
       /*for(int z=0; z < ds; z++){
			cout << dirtLoc[z] << ' ';
		}*/

        dirt_x = i;
        
        for(int j=0; j<dirtLocSize; j++){
			dirt_y = dirtLoc[j];
			dirt_dist = abs(pos[0]-dirt_x) + abs(pos[1]-dirt_y);
			//int dirtVal[2] = {dirt_x, dirt_y};
			//dirt.push_back(make_pair(dirt_dist, {dirt_x, dirt_y}));
			//dirt.push_back(make_pair(dirt_dist, dirtVal));
			pair <int, int> dirtVal = make_pair(dirt_x, dirt_y);
			pair <int, pair<int, int>> pair1 = make_pair(dirt_dist, dirtVal);
			dirt.push_back(pair1);
						
		}
		
    }
    
    
    next_move(pos[0], pos[1], dirt);
    return 0;
}
