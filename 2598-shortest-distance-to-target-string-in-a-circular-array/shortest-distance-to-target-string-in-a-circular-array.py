class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        i=len(words)
        l=startIndex+len(words)
        r=startIndex+len(words)
        lres=float("inf")
        rres=float("inf")

        words=words+words+words
        # print(words)

        while l>0:
            if words[l]==target:
                lres=startIndex-l+i
                print(lres)
                break
            l-=1
        while r<len(words):
            if words[r]==target:
                rres=r-startIndex-i
                break
            r+=1
        
        if lres==rres==float("inf"):
            return -1
        return min(lres,rres)
