class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
//        stack<int> temp;
        int end = 0;
        for(int i=0;i<temperatures.size();i++){
            result.push_back(0);
            while(!temp.empty() && temperatures[i] > temperatures[temp.top()]){
                result[temp.top()] = i - temp.top();
                temp.pop();
            }
            temp.push(i);
        } 
        return result;
    }
};