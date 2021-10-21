/*
Dhruv Varshney
dhruv.varshney@outlook.com
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x);

int main()
{
    std::cout << "Hello World!\n";
    if (isPalindrome(15852)) {
        cout << "yes";
    }
    else { cout << "no"; }

}
bool isPalindrome(int x) {
    string str;
    str = to_string(x);
    if (str.length() % 2 == 0) {
        int i = 0;
        int j = str.length() - 1;

        while(i < str.length() / 2 && j >= str.length() / 2)  {
            if (str[i] == str[j]) {
                i++;
                j--;
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }

    }

   

