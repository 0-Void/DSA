// Given a string s, find any substring
//  of length 2 which is also present in the reverse of s.

// Return true if such a substring exists, and false otherwise.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubstringPresent(string s) {
          string st = s;
         reverse(st.begin(),st.end());
         for(int i=0;i<s.length()-1;i++){

            string sbs=s.substr(i,2);
            if(st.find(sbs) != string::npos){

                return true;
                
            }
        }

         
        return false;
    }
};