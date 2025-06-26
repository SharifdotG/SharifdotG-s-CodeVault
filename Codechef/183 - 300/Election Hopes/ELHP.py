chef_votes, chefu_votes = map(int, input().split())

if chefu_votes * 2 <= chef_votes:
    print("YES")
else:
    print("NO")