def printCombinations(k):
    dp =[[] for k in range(k+1)]
    dp[0].append('')
    
    for k in range(1,k+1):
        d = dp
        dp =[[] for k in range(k+1)]
        dp[0].append("0"*k)
        for j in range(1,k+1):
            for s in d[j]:
                dp[j].append("0"+s)
            for s in d[j-1]:
                dp[j].append("1"+s)

    for k in dp:
        print(*k,sep="\n")
printCombinations(int(input()))
