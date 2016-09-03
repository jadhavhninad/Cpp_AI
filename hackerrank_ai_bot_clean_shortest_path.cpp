#include<iostream>
#include<vector>
using namespace std;


//https://www.hackerrank.com/challenges/botclean/submissions/game/27078358

void next_move(int posr, int posc, vector <string> board) {
    

    int next_dirt_row =0, next_dirt_col=0;
    int dirt_dist, dirt_dist_small=100;
    int next_dirt_row_small=0;
    
    vector<string>::iterator i=board.begin();
    while(i!=board.end()){	
	   int y=0;
       while(y < 5){
           if(i[0][y] == 'd'){
           dirt_dist = abs(posr - next_dirt_row) + abs(posc-y);
           if(dirt_dist < dirt_dist_small){
              dirt_dist_small=dirt_dist;
              next_dirt_row_small = next_dirt_row;
              next_dirt_col = y;
                }
            }
            y++;
	}

	next_dirt_row++;
	i++;
   }
    
    next_dirt_row = next_dirt_row_small;
    
    //cout << "four"  << next_dirt_row << ' ' << next_dirt_col << endl;
      
    if(posc < next_dirt_col){
			//while(posc!=next_dirt_col){
				cout << "RIGHT" << endl;
				posc++;
			//}
		}
		else if(posc > next_dirt_col){
			//while(posc!=next_dirt_col){
				cout << "LEFT" << endl;
				posc--;
			//}
		}
		
		else if(posr < next_dirt_row){
			//while(posr!=next_dirt_row){
				cout << "DOWN" << endl;
				posr++;
			//}
		}
		else if(posr > next_dirt_row){
			//while(posr!=next_dirt_row){
				cout << "UP" << endl;
				posr--;
			//}
		}
		
		else{
			cout << "CLEAN" << endl;
			//cout << "Reached dirt. Now will look for next dirt" << endl;
		}
    
       
}



int main(void) {
    int pos[2];
    vector <string> board;
    
    cin>>pos[0]>>pos[1];
    
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    
    next_move(pos[0], pos[1], board);
    return 0;
}
