class Solution(object):
    def replaceWords(self, dic, sentence):
        s=sentence.split()
        # print(s)
        ans={}
        l=[]
        for i in range(0, len(s)):
            for j in range(0, len(dic)):
                count=0
                if len(dic[j])<=len(s[i]):
                    for k in range(0, len(dic[j])):
                        # if len(dic[j])<len(s[i]):
                        if dic[j][k]==s[i][k]:
                            count=count+1
                        else:
                            break
                    if count==len(dic[j]):
                        # s[i]=str(dic[j])
                        l.append(str(dic[j]))
                        print(s[i], dic[j])
            l.sort()
            # ans[s[i]]=l
            if len(l)!=0:
                s[i]=l[0]
            l=[]

        # print(ans.keys(), ans.values())
        return " ".join(s)











        # s=sentence.split()
        # print(s)
        # for i in range(0,len(s)):
        #     for j in range(0,len(dic)):
        #         if dic[j] in s[i]:
        #             s[i]=dic[j]
        #             break
        # return(str(" ".join(s)))