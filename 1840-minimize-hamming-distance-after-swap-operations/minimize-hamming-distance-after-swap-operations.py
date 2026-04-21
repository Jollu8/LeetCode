class Solution:
    def minimumHammingDistance(self, source: List[int], target: List[int], allowedSwaps: List[List[int]]) -> int:
        parent = [n for n in range(len(source))]
        def make_set(v):
            parent[v] = v
        def find_set(v):
            if v == parent[v]:
                return v
            return find_set(parent[v])
        def union_set(a, b):
            a = find_set(a)
            b = find_set(b)
            if (a != b):
                parent[b] = a
        for pair in allowedSwaps:
            if pair[0] > pair[1]:
                pair[0], pair[1] = pair[1], pair[0]
            union_set(pair[0], pair[1])
        for n in range(len(source)):
            parent[n] = find_set(n)
        connected = defaultdict(list)
        for i,root in enumerate(parent):
            connected[root].append(i)
        res = 0
        for indice in connected.values():
            freq = defaultdict(int)
            freq_tar = defaultdict(int)
            for i in indice:
                freq[source[i]] += 1
                freq_tar[target[i]] += 1
            share = 0
            for k in freq.keys():
                share += min(freq[k],freq_tar[k])
            res += len(indice) - share
        return res
