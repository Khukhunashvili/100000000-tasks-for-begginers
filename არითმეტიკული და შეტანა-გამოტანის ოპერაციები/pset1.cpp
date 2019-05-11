// გვ 6, ამოცანა N1
// მოცემულია ორნიშნა მთელი რიცხვი N.
// დაწერეთ პროგრამა, რომელიც გამოიტანს მის ციფრთა ჯამს.


#include <iostream>

using namespace std;

int N;

int main(){
	cin >> N;
	cout << N/10+N%10;
	return 0;
}