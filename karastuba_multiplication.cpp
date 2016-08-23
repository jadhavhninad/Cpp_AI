#include <iostream>
#include <vector>
using namespace std;

//Both numbers are of same length and the length is even, the max digits in the number is set to 20.

class karastuba{
	
	public:
	int num1[20];
	int num2[20];
 	
	
	int multiply(int a, int b){
		
		if(a == b)
			return num1[a] * num2[a];
	
		int midpoint = (a + b)/2;	
		
		int left = multiply(a, midpoint);
		int right = multiply(midpoint+1, b);
		
		int distleft = midpoint - a, distright = midpoint+1 - b;
			int num1left=0, num1right=0, num2left=0, num2right=0;
			
			for(int i=a; i<=midpoint; i++){
				num1left = num1left + ((10^distleft) * num1[i]);
				num2left = num1left + ((10^distleft) * num2[i]);
				distleft--;
			} 
			
			for(int i=midpoint+1; i<=b; i++){
				num1right = num1right + ((10^distright) * num1[i]);
				num2right = num1right + ((10^distright) * num2[i]);
				distright--;
			} 
		
		int middle = ((num1left + num1right) * (num2left+ num2right) - left - right);
		int digits = b-a+1;
		
		int answer = left*(10^digits) + right + middle*(10^(digits/2));
		return answer;
		
	}
	
	/*void display(){
		cout << num1 << endl << num2 ;
	}*/

};

int main(){
	
	karastuba one;
	int size;
	
	cin >> size;
	
	for(int i=0;i<size;i++){
		cin >> one.num1[i];	
	}
	
	for(int i=0;i<size;i++){
		cin >> one.num2[i];	
	}
	
	int fin = one.multiply(0,size-1);
	cout << fin;
	
	return 0;
}
