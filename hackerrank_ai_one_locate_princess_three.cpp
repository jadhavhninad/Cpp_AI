#include <iostream>
//#include <string>
using namespace std;


void displayPathtoPrincess(int n){
    
    /*
     * Using char array here since it might improve performance for very high iterations and also reduces the function call to 'find'
     */
    
    int me_x=0, me_y=0, princess_x=0, princess_y=0;
    //char val;
    char val[3];
    //string val;
	
		for(int i=0 ; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> val[j];
				if (val[j]=='m'){
					me_x = i;
					me_y = j;
				}	
				if (val[j]=='p'){
					princess_x=i;
					princess_y=j;
				
				}
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
    displayPathtoPrincess(m);

    return 0;
}
