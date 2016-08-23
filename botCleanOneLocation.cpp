#include<iostream>
#include<vector>
using namespace std;

// Problem statement : https://www.hackerrank.com/challenges/botclean
//Unoptimized basic solution.

void next_move(int posr, int posc, vector <string> board) {
    
    //int ss = board.size();
    int next_dirt_row =0, next_dirt_col=0;
    
   // for (std::vector<string>::const_iterator i = board.begin(); i != board.end(); ++i)
    //std::cout << *i ;
    
    int found = 0;
    
    vector<string>::iterator i=board.begin();
    while(i!=board.end() && found==0){	
	   int y=0;
       while(i[0][y] != 'd' && y < 5) y++;
       
       if(y<=4){
		 next_dirt_col = y; 
		 found = 1; 
		}
		else{
			next_dirt_row++;
			i++;
		}
   }
    
    //cout << next_dirt_row << ' ' << next_dirt_col << endl;
      
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
