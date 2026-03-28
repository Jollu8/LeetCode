class Solution:
    def findTheString(self, lcp: List[List[int]]) -> str:
        n = len(lcp)
        word = [''] * n      
        char_idx = 0
        for i in range(n):
            if word[i] != '':
                continue
            if char_idx >= 26:
                return ""
            word[i] = chr(ord('a') + char_idx)
            char_idx += 1
            for j in range(i + 1, n):
                if lcp[i][j] > 0:
                    if word[j] != '' and word[j] != word[i]:
                        return ""
                    word[j] = word[i]    
        expected = [[0] * n for _ in range(n)]       
        for i in range(n - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                if word[i] == word[j]:
                    if i == n - 1 or j == n - 1:
                        expected[i][j] = 1
                    else:
                        expected[i][j] = expected[i + 1][j + 1] + 1
                else:
                    expected[i][j] = 0
        for i in range(n):
            for j in range(n):
                if expected[i][j] != lcp[i][j]:
                    return ""    
        return ''.join(word)
