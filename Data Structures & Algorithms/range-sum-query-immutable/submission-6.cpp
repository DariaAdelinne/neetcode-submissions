class NumArray {
    vector<int> pref;
public:
    NumArray(vector<int>& nums) {
        pref.assign(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++)
            pref[i + 1] = pref[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return pref[right + 1] - pref[left];
    }

    vector<int> result(vector<int>& nums)
    {
        NumArray* obj = new NumArray(nums);
        int param_1 = obj->sumRange(0,2);
        int param_2 = obj->sumRange(2,5);
        int param_3 = obj->sumRange(0,5);
        return {param_1, param_2, param_3};
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */