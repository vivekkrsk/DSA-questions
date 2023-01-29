def totalNQueens(self, n: int) -> int:
        col = set()
        posdiag = set() # (r + c)
        negdiag = set() # (r - c)

        res = 0
        def backtrack(r):
            if r == n:
                nonlocal res
                res +=1
                return

            for c in range(n):
                if c in col or (r+c) in posdiag or (r-c) in negdiag:
                    continue

                col.add(c)
                posdiag.add(r+c)
                negdiag.add(r-c)
                backtrack(r+1)
                col.remove(c)
                posdiag.remove(r+c)
                negdiag.remove(r-c)

        backtrack(0)
        return res