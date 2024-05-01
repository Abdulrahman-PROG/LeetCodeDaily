class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        idx = word.find(ch)
        rs = word[:idx + 1][::-1]
        rs += word[idx + 1:]
        return rs
        