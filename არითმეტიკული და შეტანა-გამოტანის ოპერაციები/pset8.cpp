// გვერდი N11, ამოცანა 8
// http://codeforces.com/problemset/problem/1/A

#include <iostream>

using namespace std;

int n, m, a;

main(){
	cin >> n, m, a;
    cout << ((m+a-1)/a) * ((n+a-1)/a);
}