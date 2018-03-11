#include <iostream>

int main(){
	using namespace std;
	int i, max; 
	int score[5]; 
	
	cout << "Enter 5 scores: " << endl;
	cin >> score[0];
	max=score[0];
	for (i=1; i<5; i++){
		cin >> score[i];
		if (score[i] > max){
			max=score[i];
		}
	}
	cout << "The largest score is " << max <<endl;
	cout << "The scores and their \n";
	cout << "differences from the highest are : \n";
	for (i=0; i<5; i++){
		cout << score[i] << " off by " 
		<< (max - score[i]) << endl;
	}
	return 0;
}