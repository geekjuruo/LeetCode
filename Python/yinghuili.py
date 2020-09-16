def lengthOfLastWord(s: str) -> int:
        lens = len(s)
        if lens != 0 and s[lens-1] == ' ':
            s = s[0:lens-1]
        print(s)
        s_split = s.split(' ')
        lenx = len(s_split)
        if lenx == 0:
            return 0
        else:
            return len(s_split[lenx-1])

print(lengthOfLastWord('a '))