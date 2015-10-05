class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a[256];
        int aux = -1;
        memset(a,-1,sizeof(a));
        int max = 0;
        for(int i = 0;i < s.size(); i++)
        {
            if(a[s[i]] > aux)
            {
                aux = a[s[i]];
            }
            if(i - aux > max)
            {
                max = i - aux;
            }
            a[s[i]] = i;
        }
    return max;    
    }
};
