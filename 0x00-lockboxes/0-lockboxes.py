#!/usr/bin/python3
"""
    Method that determines if all the boxes can be opened.
"""


def canUnlockAll(boxes):
    key_list = [0]

    for key in key_list:
        for src in boxes[key]:
            if src not in key_list and src < len(boxes):
                key_list.append(src)
    for index in range(len(boxes)):
        if index not in key_list:
            return False
    return True
