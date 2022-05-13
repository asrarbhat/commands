file1=open("tt.mp4","rb").read()
file2=open("dd.mp4","rb").read()
i=0
while(file1[i]==file2[i]):
    i+=1
print(i)
