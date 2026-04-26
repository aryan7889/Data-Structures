#include<bits/stdc++.h>
using namespace std;



string DuplicateLetter(string word){
    vector<int>freq(26,0);
    vector<bool>used(26,false);
    string result;

    for(char c:word){
        freq[c-'a']++;
    }

    for(char c: word){
        freq[c-'a']--;
        if(used[c-'a']){
            continue;
        }

        while (!result.empty()  && result.back()>c && freq[result.back()-'a']>0)
        {
            used[result.back()-'a']=false;
            result.pop_back();
        }
        
        result.push_back(c);
        used[c-'a']=true;
    }
    return result;
}

int main(){
    string word = "cbacdcbc";
    string reult = DuplicateLetter(word);
    cout<<reult;
    return 0;
}