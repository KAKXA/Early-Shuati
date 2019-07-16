def longestValidParentheses(self, s: str) -> int:
    i = 0
    sum = 0
    temp = [-1,]
    temp1 = 0
    while i < len(s):
        if s[i] == '(':
            sum += 1
        else:
            sum -= 1
        if  sum < 0 :
            sum = 0
            temp = [i,]
        elif sum == 0:
            temp.append(i)
            temp1 = max(temp1,(temp[-1] - temp[0]))
        i += 1
    s = s[::-1]
    temp = [-1]
    i=0
    sum=0
    while i < len(s):
        if s[i] == ')':
            sum += 1
        else:
            sum -= 1
        if  sum < 0 :
            sum = 0
            temp=[i]
        elif sum == 0 :
            temp.append(i)
            temp1 = max(temp1,temp[-1] - temp[0])
        i += 1
    return temp1
#leetcode 32
#关键点：重复使用的变量必须重新赋值，不要忘记#python注意缩进
#意识到sum出现负数以后该字符以前和以后绝不可能产生联系
