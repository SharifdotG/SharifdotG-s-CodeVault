import sys


def binary_to_decimal(binary_str):
    return int(binary_str, 2)


def hex_to_decimal(hex_str):
    return int(hex_str, 16)


def decimal_to_binary(decimal):
    return bin(decimal)[2:]


def decimal_to_hex(decimal):
    return hex(decimal)[2:].lower()


input = sys.stdin.read
data = input().strip().split("\n")

n = int(data[0])
cases = data[1:]

for case_num in range(1, n + 1):
    number_str, base_type = cases[case_num - 1].split()

    if base_type == "bin":
        decimal_value = binary_to_decimal(number_str)
    elif base_type == "hex":
        decimal_value = hex_to_decimal(number_str)
    elif base_type == "dec":
        decimal_value = int(number_str)
    else:
        print("Unknown base type", file=sys.stderr)
        continue

    decimal_str = str(decimal_value)
    hex_str = decimal_to_hex(decimal_value)
    binary_str = decimal_to_binary(decimal_value)

    binary_str = binary_str.lstrip("0") or "0"

    print(f"Case {case_num}:")
    if base_type != "dec":
        print(f"{decimal_str} dec")
    if base_type != "hex":
        print(f"{hex_str} hex")
    if base_type != "bin":
        print(f"{binary_str} bin")
    print()
