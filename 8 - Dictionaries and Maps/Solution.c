#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    char name[20];
    long int num;
    scanf("%d",&n);
    map <string, long> pBook;
    for (int i = 0; i < n; i++) {
        scanf("%s",name);
        scanf("%d",&num);
        pBook[name] = num;
    }
    while(scanf("%s",name)>0) {
        if (pBook.find(name) != pBook.end()) {
            printf("%s=%ld\n",name,pBook.find(name)->second);
        } else {
            printf("Not found\n");
        }
    }
}
