#include <iostream>
#include <string>
using namespace std;


void displayPathtoPrincess(int n){
    
    /*
     * Using String as input and only storing the coordinates helps to reduce space complexity.
     * THere is no need to store the the blank values in a matrix and then get the coordinates.
     * This program simulates a matrix to get position values for bots.
     */
     
    
    int me_x=0, me_y=0, princess_x=0, princess_y=0;
    //char val;
    //char val[3];
    string val;
    
    
    /*g_size = grid.size();
    cout << g_size << endl ;
    
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
	cout << me_x << "," << me_y <<endl << princess_x << "," <<princess_y << endl;*/
	
		for(int i=0 ; i<n; i++){
				cin >> val;
				size_t found_me = val.find("m"); //the find function might increase complexity for very large inputs. Using a char arry and getting the value
				size_t found_princess = val.find("p"); //if i,j might be faster since it saves function call.
				
				if (found_me!=string::npos){
					me_x = i;
					me_y = int(found_me);
				}
				
				if (found_princess!=string::npos){
					princess_x=i;
					princess_y=int(found_princess);
				
				}
		}
	
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
		
	}
		

int main(void) {

    int m;
    //vector <string> grid;

    cin >> m;

    /*for(int i=0; i<m; i++) {
        string s; 
        cin >> s;
        grid.push_back(s);
    }*/     
	
    displayPathtoPrincess(m);

    return 0;
}
