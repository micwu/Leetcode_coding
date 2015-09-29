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
//原本我认为我的上面版本已经达到了o(n)了，可是还是超时了。虽然自己的编译器通过还是得向更好的方法啊。只能使用map容器来做了
//AC 代码
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hmap;
        vector<int> count;
        for(int i = 0; i < nums.size();i++)
        {
            if(!hmap.count(nums[i]))
            {
            	hmap.insert(make_pair(nums[i],i));	
            }
            
            if(hmap.count(target-nums[i]))
            {
            	int n = hmap[target-nums[i]];
            	if(n < i)
            	{
            	count.push_back(n+1);
            	count.push_back(i+1);
            	return count;
            	}
            	else if(n > i)
            	{
            	    count.push_back(i+1);
            	    count.push_back(n+1);
            	    return count;
            	}
            }
        }
    }
};
