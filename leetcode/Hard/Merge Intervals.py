# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        intervals.sort(key = lambda x: x.start)
        res = []
        for i in range(len(intervals)):
            if res == []:
                res.append(intervals[i])
            else:
                last = len(res) - 1
                if res[last].start <= intervals[i].start <= res[last].end:
                    res[last].end = max( res[last].end, intervals[i].end)
                else:
                    res.append(intervals[i])
        return res