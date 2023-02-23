#!/usr/bin/python3
"""
*********MakingChange*********
Task: Change comes from within
Given a pile of coins of different values,
determine the fewest number of coins needed to
meet a given amount total
"""


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
    num_of_coins = 0


    if total <= 0:
        return 0

    for coin in sorted(coins)[::-1]:
        num_of_coins += total // coin
        total = total % coin

    if total != 0:
        return -1
    return num_of_coins
