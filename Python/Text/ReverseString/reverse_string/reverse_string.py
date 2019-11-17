"""
reverse_string:

will return the reversed order of characters in provided string
"""


def reverse_string(string):
    reversed_list = [string[-1-i] for i in range(0, len(string))]
    return "".join(reversed_list)
