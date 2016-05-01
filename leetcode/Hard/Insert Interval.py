# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[Interval]
        :type newInterval: Interval
        :rtype: List[Interval]
        """
        ret = []
        for i in range(len(intervals)):
            if newInterval.start <= intervals[i].start:
                if intervals[i].start <= newInterval.end:
                    newInterval.end = max(newInterval.end, intervals[i].end)
                else:
                    ret.append(newInterval)
                    newInterval = intervals[i]
            else:
                if newInterval.start <= intervals[i].end:
                    newInterval.start = intervals[i].start
                    newInterval.end = max(newInterval.end, intervals[i].end)
                else:
                    ret.append(intervals[i])
        ret.append(newInterval)
                    
        return ret
        