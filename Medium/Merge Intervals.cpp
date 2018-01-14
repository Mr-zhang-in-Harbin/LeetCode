/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        int n = intervals.size();
        vector<Interval> Res;
        if (n < 1)
            return Res;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n - i - 1;j++) {
                if (intervals[j].start > intervals[j + 1].start) {
                    Interval temp = intervals[j];
                    intervals[j] = intervals[j + 1];
                    intervals[j + 1] = temp;
                }
            }
        }
        int start = intervals[0].start,end = intervals[0].end;
        for (int i = 1;i < n;i++) {
            if(intervals[i].start <= end)
                end = max(end,intervals[i].end);
            else {
                Res.push_back(Interval(start,end));
                start = intervals[i].start;
                end = intervals[i].end;
            }
        }
        Res.push_back(Interval(start,end));
        return Res;
    }
};