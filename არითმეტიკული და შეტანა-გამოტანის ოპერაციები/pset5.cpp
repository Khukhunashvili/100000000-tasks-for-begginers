// გვერდი 9, ამოცანა N5
// მოცემულია მთელი N წამი.
// დაწერეთ პროგრამა, რომელიც დროის იგივე მონაკვეთს გამოიტანს ფორმატით
// "საათი:წუთი:წამი"

#include <iostream>

using namespace std;

int total, hr, minute, sec;

int main() {
    cin >> total;
	hr = total/3600;
	minute = (total%3600)/60;
	sec = total%60;
	cout << hr << ":" << minute << ":" << sec;
	return 0;
}