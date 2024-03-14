testCases = int(input())

for i in range(testCases):
    pa, pb, g1, g2 = map(float, input().split())
    
    pa = int(pa)
    pb = int(pb)
    years = 0
    
    while pa <= pb:
        pa += int(pa * (g1 / 100))
        pb += int(pb * (g2 / 100))
        years += 1
        
        if years > 100:
            print("Mais de 1 seculo.")
            break
        
    if years <= 100:
        print(f"{years} anos.")
