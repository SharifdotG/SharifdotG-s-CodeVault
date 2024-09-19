MAXN = 3501
MAXPRIME = 35000


def sieve(n):
    primes = []
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False

    for i in range(2, n + 1):
        if is_prime[i]:
            primes.append(i)
            for j in range(i * 2, n + 1, i):
                is_prime[j] = False

    return primes


primes = sieve(MAXPRIME)

while True:
    n = int(input())
    if n == 0:
        break

    josephus = list(range(1, n + 1))
    idx = 0
    for i in range(n - 1):
        idx = (idx + primes[i] - 1) % len(josephus)
        josephus.pop(idx)

    print(josephus[0])
