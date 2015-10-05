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
//这道题思路：出现重复的，则立马把aux值设为重复的下标。
//历遍字符串，当当前字符出现过的时候，子串开始位置+1，否则更新a数组中的hash值为当前位置。
