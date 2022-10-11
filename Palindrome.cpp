#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, t, rev = 0, temp;
	cout << "Enter the Number" << endl;
	cin >> n;
	temp = n;
	while (n > 0){
		t = n % 10;
		rev = rev * 10 + t;
		n = n / 10;
	}
	if (temp == rev){
		cout << "Number is palindrome";}
	else{
		cout << "Number is not palindrome";}
}
