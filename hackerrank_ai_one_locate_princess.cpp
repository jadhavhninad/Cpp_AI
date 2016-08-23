#include <iostream>
#include <vector>
using namespace std;


void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int g_size,me_x=0, me_y=0, princess_x=0, princess_y=0;
    
    g_size = grid.size();
    //cout << g_size << endl ;
    
    for(int i =0 ; i<g_size; i++){
		for(int j=0; j<n ; j++){
			//cout << grid[i][j] << endl;
			if (grid[i][j]=='m'){
				me_x = i;
				me_y = j;
			}
			else if (grid[i][j]=='p'){
				princess_x=i;
				princess_y=j;
			
			}
		}
	}
	//cout << me_x << "," << me_y <<endl << princess_x << "," <<princess_y << endl;
	
		if(me_x < princess_x){
			while(me_x!=princess_x){
				cout << "DOWN" <<endl;
				me_x+=1;
			}
		}
		else if(me_x > princess_x){
			while(me_x!=princess_x){
				cout << "UP" <<endl;
				me_x-=1;
			}
		}
		
		if(me_y < princess_y){
			while(me_y!=princess_y){
				cout << "RIGHT" <<endl;
				me_y+=1;
			}
		}
		else if(me_y > princess_y){
			while(me_y!=princess_y){
				cout << "LEFT" <<endl;
				me_y-=1;
			}
		}
		
			
	/*while(me_x!=princess_x && me_y!=princess_y){
			if(me_x!=princess_x){
				if(me_x < princess_x)
			}
		}*/
		
	}
		

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; 
        cin >> s;
        grid.push_back(s);
    }
    
     
	
    displayPathtoPrincess(m,grid);

    return 0;
}
