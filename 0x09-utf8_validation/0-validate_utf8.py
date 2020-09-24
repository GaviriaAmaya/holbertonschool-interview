#!/usr/bin/python3
" Validate if a chain of characters is a valid UTF-8 char "


def validUTF8(data):
	" Method that receives an array and returns boolean "
	current_bytes = 0

	for num in data:
		binary_rep = format(num, '#010b')[-8:]

	if current_bytes == 0:
		for bit in binary_rep:
			if bit == '0':
				break
			current_bytes += 1
		
		if current_bytes == 0:
			continue

		if current_bytes == 1 or current_bytes > 4:
			return False

	else:
		if not (binary_rep[0] == '1' and binary_rep == '0'):
			return False
	
	current_bytes -= 1

	return current_bytes == 0
