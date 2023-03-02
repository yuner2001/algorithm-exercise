#include <iostream>
#include "1/solution.cpp"

void test(int n) {
    if (n >= 0) 
        for (int i = 0; i < n; i++)
            cout << i << '\t';
    cout << endl;
} 

int main(int, char**) {
    test(6);
}
