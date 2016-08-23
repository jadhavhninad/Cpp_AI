#include <iostream>
#include <vector>
using namespace std;


/*
 * Since only one move cal be made at a time, select a single move, remove loop. The program calls the function in a loop.
 * */

void nextMove(int n, int r, int c, vector <string> grid){
    
    int me_x = r, me_y=c, princess_x, princess_y;
    
    for(int i=0 ; i<n; i++){
		for(int j=0; j<n ; j++){
		
			if (grid[i][j]=='p'){
				princess_x=i;
				princess_y=j;
			
			}
		}
	}
	//cout << me_x << "," << me_y <<endl << princess_x << "," <<princess_y << endl;
	
		if(me_x < princess_x){
			//while(me_x!=princess_x){
				cout << "DOWN" <<endl;
				me_x+=1;
			//}
		}
		else if(me_x > princess_x){
			//while(me_x!=princess_x){
				cout << "UP" <<endl;
				me_x-=1;
			//}
		}
		else if(me_y < princess_y){
			//while(me_y!=princess_y){
				cout << "RIGHT" <<endl;
				me_y+=1;
			//}
		}
		else if(me_y > princess_y){
			//while(me_y!=princess_y){
				cout << "LEFT" <<endl;
				me_y-=1;
			//}
		}
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
