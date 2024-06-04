class Solution:
    def longestPalindrome(self, s: str) -> int:
        # Variable to count characters with odd frequencies
        odd_count = 0
        # Dictionary to store the frequency of each character
        frequency = {}

        # Count the frequency of each character in the string
        for char in s:
            frequency[char] = frequency.get(char, 0) + 1
            # If the frequency is even, decrement odd_count
            if frequency[char] % 2 == 0:
                odd_count -= 1
            # If the frequency is odd, increment odd_count
            else:
                odd_count += 1

        # If more than one character has an odd frequency,
        # we can include one of them in the center of the palindrome
        if odd_count > 1:
            return len(s) - odd_count + 1
        # If at most one character has an odd frequency, use all characters
        return len(s)