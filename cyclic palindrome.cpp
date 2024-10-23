#include<iostream>
#include <algorithm>  
using namespace std;

bool isPalindrome(const string &str) {
    int n = str.length();
    
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1])
        return false;
    }
    
     return true;
}

bool iscyclicpalindrome(string &str){
    int n= str.length();
    for(int i=0;i<n;i++){
        if(isPalindrome(str)){
            return true;
        }
        rotate(str.begin(), str.begin() + 1, str.end());
    }
    return false;
}


int main(){
    int k;
    cin>>k;
    string str;
    for (int i = 0; i < k; i++) {
    cout << "Enter string " << i + 1 << ": ";
    cin >> str;
    
   
    if (iscyclicpalindrome(str)) {
        cout << str << " 1\n";  
    } else {
        cout << str << " -1\n";  
    }
}

    return 0;
}