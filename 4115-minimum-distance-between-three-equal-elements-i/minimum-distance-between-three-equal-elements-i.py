class Solution:
    def minimumDistance(self, a: List[int]) -> int:
        def f(d=defaultdict(lambda:deque(maxlen=3))):
            for i,v in enumerate(a):
                d[v].append(i)
                if len(d[v])==3: yield (d[v][2]-d[v][0])*2
        
        return min(f(),default=-1)