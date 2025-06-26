testcases = int(input())

for _ in range(testcases):
    earned_amount, tax_amount = map(int, input().split())
    
    print (earned_amount - tax_amount)