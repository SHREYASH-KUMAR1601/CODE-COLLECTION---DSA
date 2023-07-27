#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
	int greater = max(a, b);
	int smallest = min(a, b);
	for (int i = greater; ; i += greater) {
		if (i % smallest == 0)
			return i;
	}
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<LCM(a,b);
    return 0;
}