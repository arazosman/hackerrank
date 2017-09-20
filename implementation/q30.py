# https://www.hackerrank.com/challenges/extra-long-factorials/problem

x = int(input());
ans = 1;

for i in range(1, x+1):
    ans = ans*i;

print(ans);