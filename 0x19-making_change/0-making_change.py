#!/usr/bin/python3

"""
***********~Making change~***********
Return the least number of coins need to return the total
"""


def makeChange(coins, total):
    """
    *********************************************************************
    Change comes from within
    @coins: list of the coins available
    @total: total to return
    Return: least number of coins needed to get to total
        - If total is 0 or less, return 0
        - If total cannot be met by any number of coins you have, return -1
        - Coins is a list of the values of the coins in your possession
        - The value of a coin will always be an integer greater than 0
        - You can assume you have an infinite number of each denomination of
        coin in the list
    **********************************************************************
    """
     if total <= 0:
        return 0

    coins = sorted(coins)
    num_of_coins = 0
    aux = coins[::-1]
    
    for coin in aux:
        x = total // coin
        num_of_coins += x
        total = total % coin

    if total != 0:
        return -1

    return num_of_coins
