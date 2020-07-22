#!/usr/bin/python3
'Based on a list of lists, determine if the position number of all'
'lists are in any of those, in certain order'


def canUnlockAll(boxes):
    first = [0]
    unlocked = [1] + [0] * (len(boxes) - 1)
    i = 0

    if len(boxes) == 0:
        return True
    if not isinstance(boxes, list):
        return False
    while first:
        current = first.pop()
        for key in boxes[current]:
            if key > 0 and key < len(boxes) and unlocked[key] == 0:
                unlocked[key] = 1
                first.append(key)
        i = i + 1

    if 0 in unlocked:
        return False
    else:
        return True
