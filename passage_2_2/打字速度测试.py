import time
bt=time.time();
text=input("请开始打字");
print("打字速度：", end='');
print(len(text)/(time.time()-bt)*60, end='');
print(" 字/分");
input("回车继续");
