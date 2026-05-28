class Solution {
public:
    bool isAnagram(string s, string t) {

    string sortedWord1 = s;
    sort(sortedWord1.begin(), sortedWord1.end());

    string sortedWord2 = t;
    sort(sortedWord2.begin(), sortedWord2.end());

    if(sortedWord1 == sortedWord2){
        return true;
    }else{
        return false;
    }

        
    }
};
