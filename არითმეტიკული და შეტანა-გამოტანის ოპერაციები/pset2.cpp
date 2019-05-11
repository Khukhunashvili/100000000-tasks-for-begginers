// გვ 7, ამოცანა N2
// მოცემულია ორი მთელი A და B რიცხვი.
// დაწერეთ პროგრამა, რომელიც გამოთვლის ამ ორი რიცხვის საშუალო არითმეტიკულს

#include <stdio.h>

using namespace std;

int A, B;
double average;

int main(){
	scanf("%d%d", &A, &B);
	average = (double) (A+B)/2;
	printf("%.1f", average);
}