class Solution:
    def makeLargestSpecial(self, s: str) -> str:
        parts = []
        cnt, start = 0, 0

        for i, c in enumerate(s):
            if c == '1':
                cnt += 1
            else:
                cnt -= 1
            
            if cnt == 0:
                inner = self.makeLargestSpecial(s[start + 1: i])
                parts.append('1' + inner + '0')
                start = i + 1

        parts.sort(reverse=True)
        return "".join(parts)
        