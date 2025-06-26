import sys


def process_message(message):
    shifted_message = "".join(chr(ord(c) + 3) if c.isalpha() else c for c in message)

    reversed_message = shifted_message[::-1]

    mid = len(reversed_message) // 2
    final_message = "".join(
        chr(ord(c) - 1) if i >= mid else c for i, c in enumerate(reversed_message)
    )

    return final_message


input = sys.stdin.read
data = input().splitlines()

test_cases = int(data[0])
results = []

for i in range(1, test_cases + 1):
    message = data[i]
    results.append(process_message(message))

for result in results:
    print(result)
