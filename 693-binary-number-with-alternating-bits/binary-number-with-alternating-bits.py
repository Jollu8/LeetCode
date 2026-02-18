class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        bits = bin(n)
        
        return False if bits.find('11') + 1 or bits.find('00') + 1 else True

        