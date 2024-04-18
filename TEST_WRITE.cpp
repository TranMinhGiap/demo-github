#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string a){
	string chuanhoa;
	stringstream ss(a);
	string token;
	while(ss >> token){
		chuanhoa += toupper(token[0]);
		for(int i = 1 ; i < token.length() ; i++){
			chuanhoa += tolower(token[i]);
		}
		chuanhoa += " ";
	}
	cout << endl << "chuan hoa : " << chuanhoa;
}

void sum(string a){
	int sum = 0;
	for(int i = 0 ; i < a.length() ; i++){
		sum += a[i] - '0'; // co the sai neu khong phai la chuoi so 
	}
	cout << "tong : " << sum;
}

void ts(string a){
	int cnt[256] = {0};
	int space = 0;
	for(char x : a){
		if(x == ' ') space ++;
		else cnt[x] ++;
	}
	cout << endl << "tan suat" << endl;
	for(int i = 0 ; i < 256 ; i++){
		if(cnt[i] != 0){
			cout << (char)i << " - " << cnt[i] << endl;
		}
	}
	cout << "space : " << space;
}

void pl(string A){
	int alpha, digit, special;
	alpha = digit = special = 0;
	for(char x : A){
		if(isalpha(x)) alpha ++;
		else if(isdigit(x)) digit ++;
		else special ++;
	}
	cout << endl << "chu cai : " << alpha << endl << "chu so : " << digit << endl << "ki tu dac biet : " << special;
}

void t(string a){
	cout << "chu so : ";
	for(int i = 0 ; i < a.length() ; i++){
		if(!isdigit(a[i])) continue;
		cout << a[i] - '0' << " ";
	}
}
int main(){
	string a;
	cout << "nhap chuoi : ";
	fflush(stdin);
	getline(cin,a);
	pl(a);
	chuanhoa(a);
	ts(a);
	string number;
	cout << endl << "input string : ";
	cin >> number;
	sum(number);
	string number1;
	cout << endl << "input number and char : ";
	cin >> number1;
	t(number1);
	// check
	return 0;
}
