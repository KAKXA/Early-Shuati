def romanToInt(self,stri):
    sum = 0
    i = 0
    dic2 = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    dic1 = {'IV':4,'IX':9,'XL':40,'XC':90,'CD':400,'CM':900}
    while   i<len(stri):
        try:
            if  (stri[i] + stri[i+1]) in dic1:
                sum = sum + dic1[ stri[i] + stri[i+1] ]
                i = i+2
            else:
                sum = sum +dic2[stri[i]]
                i = i+1
        except:
            sum = sum + dic2[stri[i]]
            i = i+1
    return sum
#在使用python的while循环时记得自增
#Leetcode 13
