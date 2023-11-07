#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s = "";
    stack<string> stringStack;
    stringStack.push(s);
    int num_op;
    cin >> num_op;
    
    for (int i = 0; i<=num_op;i++){
        string line;
        getline(cin,line);
        
        if (line[0] == '1'){
            s.append(line.substr(2,line.length()-1));
            stringStack.push(s);
            
        }
        
        else if ( line[0] == '2'){
            s = s.substr(0,s.length() - stoi(line.substr(2,line.length()-1)));
            stringStack.push(s);
        }
        else if (line[0] == '3'){
            cout << s[stoi(line.substr(2,line.length()-2))-1] << endl;
        }
        
        else if (line[0] == '4'){
            stringStack.pop();
            s = stringStack.top();

        }
    }
    return 0;
}


