class Solution:
    def checkStrings(self, s1: str, s2: str) -> bool:
        if len(s1) != len(s2):
            return False

        e1 = [0]*26
        o1 = [0]*26
        e2 = [0]*26
        o2 = [0]*26

        for i in range(len(s1)):
            if i % 2 == 0:
                e1[ord(s1[i]) - ord('a')] += 1
                e2[ord(s2[i]) - ord('a')] += 1
            else:
                o1[ord(s1[i]) - ord('a')] += 1
                o2[ord(s2[i]) - ord('a')] += 1

        return e1 == e2 and o1 == o2
    
