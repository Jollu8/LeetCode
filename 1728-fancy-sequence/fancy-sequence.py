class Fancy:
    mod = 10 ** 9 + 7

    def __init__(self):
        self.mul = 1
        self.add = 0
        self.arr = []
        

    def append(self, val: int) -> None:
        inv = pow(self.mul, self.mod-2, self.mod)
        self.arr.append((val - self.add) % self.mod * inv % self.mod)
        

    def addAll(self, inc: int) -> None:
        self.add = (self.add + inc) % self.mod
        

    def multAll(self, m: int) -> None:
        self.mul = self.mul * m % self.mod
        self.add = self.add * m % self.mod
         

    def getIndex(self, idx: int) -> int:
        if idx >= len(self.arr):
            return -1
        return (self.arr[idx] * self.mul + self.add) % self.mod

        


# Your Fancy object will be instantiated and called as such:
# obj = Fancy()
# obj.append(val)
# obj.addAll(inc)
# obj.multAll(m)
# param_4 = obj.getIndex(idx)