#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int no_test_cases;
    cin >> no_test_cases; 
    for(int i=0; i<no_test_cases; i++){
        string string1, even1, odd1;
        int size;
        cin >> string1;
        size = string1.size();
        for(int j=0;j<size;j++){
            if(j%2==0){
                even1 += string1[j];
            }else{
                odd1+= string1[j];
            }
        }
        cout << even1 << " " << odd1 << endl;
    }
    return 0;
}