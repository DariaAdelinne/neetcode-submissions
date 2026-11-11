class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(), gas.end(), 0LL) < accumulate(cost.begin(), cost.end(), 0LL))
            return -1;

        int suma = 0, best = 0;

        for(int i = 0; i < gas.size(); i++)
        {
            suma += gas[i] - cost[i];

            if(suma < 0)
            {
                suma = 0;
                best = i + 1;
            }
        }

        return best;
    }
};
