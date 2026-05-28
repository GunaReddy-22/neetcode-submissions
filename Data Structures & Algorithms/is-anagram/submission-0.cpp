class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<string>st;

    string sortedWord1= s;
    sort(sortedWord1.begin(),sortedWord1.end());
    st.insert(sortedWord1);

    string sortedWord2= t;
    sort(sortedWord2.begin(),sortedWord2.end());

    if(st.find(sortedWord2) !=st.end()){
        return true;
    }else {
        return false;
    }
        
    }
};
