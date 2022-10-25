#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//series 7 
	/*int n;
	double x;
	cin >> n;
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		cout << round(x) << endl;
		sum = sum + round(x);
		

	}
	cout << sum;*/

	//series 8 
	/*int x;
	int k = 0;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		cin >> x;
		if ((x % 2) == 0) {
			k++;
			cout << x << endl;
		}
		i++;
	}
	cout << k;*/

	//sereis 9

	//series 10
	/*int n;
	cin >> n;
	int x;
	int i = 1;
	while (i <= n) {
		cin >> x;
			if (x > 0) {
				cout << "true";
				break;
		}
			i++;
			
	}
	if (x < 0) {
		cout << "false";
	}*/

	//series 11
	/*int n;
	int k;
	cin >> n >> k;
	int x;
	int i = 1;
	while (i <= n) {
		cin >> x;
		if (x < k) {
			cout << "true";
			break;
		}
		i++;

	}
	if (x > k) {
		cout << "false";
	}*/


	//series 12
	/*int x = 1;
	int k = 0;
	while (x != 0) {
		k++;
		cin >> x;
	}
	k--;
	cout << k;*/

	//32 задачи

	//16
	/*int n;
	double m;
	double SUMm = 0;
	int i = 1;
	cin >> n >> m;
	while (i <= n) {

		SUMm = SUMm + m; 
		i++;
		m = m + 0.1;
	}
	cout << SUMm;*/



	//17
	/*double n;
	double SUMr = 0;
	cin >> n;
	for (int i = 1; i <= n; i = i + 1) {
		double r;
		cin >> r;
		SUMr = SUMr + r;
	}
	double MIDr = SUMr / n;
	cout << MIDr << endl;*/

	//18
	/*int n;
	cin >> n;
	int i = 1;
	int k = 0;
		while (i < n) {
			if ((i % 2) != 0 && (i % 3) != 0 && (i % 5) != 0)
			{
				k++;
			}
			i++;
		}
		cout << k;*/

//22
//int n;
//cin >> n;
//double sum = 0;
//for (double i = 1; i <= n; i++) {
//	sum = sum + (1 / i);
//}
//cout << sum;

	









}