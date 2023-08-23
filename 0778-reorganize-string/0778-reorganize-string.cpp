class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();

        unordered_map<int,int> mp;
        for(auto it: s) mp[it]++;

        int maxFreq=0;
        char maxChar;
        for(auto it: mp){
            if(maxFreq<it.second){
                maxChar=it.first;
                maxFreq=it.second;
            }
        }

        int ind;
        for(ind=0; ind<n; ind+=2){
            s[ind]=maxChar;
            maxFreq--;
            if(!maxFreq){
            mp.erase(maxChar);
            break;
            } 
        }

        if(maxFreq) return "";

        for(auto it: mp){
            char currChar=it.first;
            int currFreq=it.second;
            while(currFreq){
                ind=ind+2>=n?1: ind+2;
                s[ind]=currChar;
                currFreq--;
            }
        }

        return s;
    }
};