#include <iostream>
using namespace std;
int main(){
    char s[100];
    char prev;
    cout << "Enter string: ";
    gets(s);
    for (int i = 0; i < 100; i++){
        if(!(prev == ' ' and s[i] == ' ')){
            cout << s[i];
        }
        prev = s[i];
        if(s[i] == '\0'){
            break;
        }
    }
}
