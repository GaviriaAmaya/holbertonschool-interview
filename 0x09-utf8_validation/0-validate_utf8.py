#!/usr/bin/python3
" Validate if a chain of characters is a valid UTF-8 char "


def validUTF8(data):
    " Method that receives an array and returns boolean "
    current_bytes = 0
    for i, n in enumerate(data):
        byte = n & 0xFF
        if current_bytes:
            if byte >> 6 != 2:
                return False
            current_bytes -= 1
            continue
        while (1 << abs(7 - current_bytes)) & byte:
            current_bytes += 1
        if current_bytes == 1 or current_bytes > 4:
            return False
        current_bytes = max(current_bytes - 1, 0)
    return current_bytes == 0
