#!/usr/bin/python3
"""
Task: Change comes from within
Given a pile of coins of different values,
determine the fewest number of coins needed to
meet a given amount total
"""
import sys


def makeChange(coins, total):
    """
    Given a pile of coins of different values, determine the fewest
    number of coins needed to meet a given amount total.
    Return: fewest number of coins needed to meet total
        - If total is 0 or less, return 0
        - If total cannot be met by any number of coins you have, return -1
        - Coins is a list of the values of the coins in your possession
        - The value of a coin will always be an integer greater than 0
        - You can assume you have an infinite number of each denomination of
        coin in the list
    """
    if total <= 0:
        return 0

    max_n = sys.maxsize
    hash_t = [max_n for i in range(total + 1)]
    hash_t[0] = 0
    l = len(coins)
    for d in range(1, total + 1):
        for i in range(l):
            if coins[i] <= d:
                res = hash_t[d - coins[i]]
                if res != max_n and res + 1 < hash_t[d]:
                    hash_t[d] = res + 1

    if hash_t[total] == max_n:
        return -1

    return hash_t[total]
