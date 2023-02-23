def makeChange(coins, total):
    """
    ********************************************
    ****determine the fewest number of coins****
    *******needed to meet a given amount********
    ********************************************
    @coins: is a list of the values of the coins
            in the possession
    @total: given amount
    Return:
            fewest number of coins needed to meet total
            *** If total is 0 or less, return 0
            *** If total cannot be met by any number
                of coins you have, return -1
    """
    if total <= 0:
        return 0

    res = []
    sub = [0]
    #for i in range(len(coins)):
    i = 0
    while sum(sub) < total:
        sub.append((coins[i] + coins[i-1]))
        if (total - sum(sub)) >= 0:
            res.append(total - sum(sub) + 1)
        i += 1
    print(res)
    try:
        return min(res)
    except:
        return -1
