class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> alphagrp(26, -1);
        int a = 0;
        for(int i = 0; i < s1.size(); i++){
            if(alphagrp[s1[i] - 'a'] != -1 && alphagrp[s2[i] - 'a'] != -1){
                if(alphagrp[s1[i] - 'a'] != alphagrp[s2[i] - 'a']){
                    for(int j = 0; j < 26; j++){
                        if(alphagrp[j] == alphagrp[s1[i] - 'a']){
                            alphagrp[j] = alphagrp[s2[i] - 'a'];
                        }
                    }
                }
            }
            else if(alphagrp[s1[i] - 'a'] != -1){
                alphagrp[s2[i] - 'a'] = alphagrp[s1[i] - 'a'];
            }
            else if(alphagrp[s2[i] - 'a'] != -1){
                alphagrp[s1[i] - 'a'] = alphagrp[s2[i] - 'a'];
            }
            else{
                alphagrp[s2[i] - 'a'] = a;
                alphagrp[s1[i] - 'a'] = a++;
            }
        }
        string res;
        for(int i = 0; i < baseStr.size(); i++){
            if(alphagrp[baseStr[i] - 'a'] == -1){
                    res += baseStr[i];
            }
            else{
                for(int j = 0; j < 26; j++){
                    if(alphagrp[j] == alphagrp[baseStr[i] - 'a']){
                        res += 'a' + j;
                        break;
                    }
                }
            }
        }
        return res;
    }
};