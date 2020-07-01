class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ret = 0;
        int size = startTime.size();
        
        for (int i = 0; i < size; ++i) {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
                ret++;
            }
        }
        
        return ret;
    }
};
