def counter(n: int) -> None:
    for i in range(1, n+1):
        if i % 3 == 0:
            print("Crackle", end="")
        if i % 5 == 0:
            print("Pop", end="")
        if i % 3 != 0 and i % 5 != 0:
            print(i, end="")
        print("")


if __name__ == "__main__":
    counter(100)
