#!/usr/bin/python3
"""
Change comes from within
"""


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
    if (type(total) is not int or type(coins) is not list):
        return -1
    if total <= 0:
        return 0
    try:
        coins.sort()
        coins.reverse()
        fewest = 0
        for coin in coins:
            "" For loop """
            if total <= 0:
                break
            buff = total // coin
            fewest += buff
            total -= (buff * coin)
        if total != 0:
            return -1
        return fewset
    except Exception:
        return -1
