class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator pos;
		vector<int>::iterator temp;
        vector<int> count;
        for(pos = nums.begin();pos != nums.end(); pos++)
        {
            int num = target - *pos;
            temp = find(nums.begin(),nums.end(),num);
            
            if(temp == nums.end())
            {
                continue;
            }
            else
            {
                count.insert(count.end(),*pos);
                count.insert(count.end(),distance(nums.begin(),temp));
                return count;
            }
        }
    }
};
//原本我认为我的上面版本已经达到了o(n)了，可是还是超时了。虽然测试通过还是得向更好的方法啊。
