#User function Template for python3

class Solution():
    def updateQuery(self, N, Q, U):
        #your code goes here
        count = [[0]*17 for _ in range(N+1)]

        

        for l, r, x in U:

            l, r = l-1, r-1

            for b in range(17):

                if x & (1<<b):

                    count[l][b] += 1

                    count[r+1][b] -= 1

        

        for i in range(1, N):

            for j in range(17):

                count[i][j] += count[i-1][j]

            

        res = []

        for i in range(N):

            cur = 0

            for b in range(17):

                if count[i][b]:

                    cur |= (1<<b)

            res.append(cur)

        

        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    for _ in range(int(input())):
        n,q = map(int, input().split())
        U = []
        for i in range(q):
            l,r,x = map(int, input().split())
            U.append([l,r,x])
        arr = Solution().updateQuery(n, q, U)
        for i in arr:
            print(i, end =" ")
        print()
# } Driver Code Ends