while True:
    try:
        complaints = int(input())
        
        if complaints == 0:
            print("vai ter copa!")
        else:
            print("vai ter duas!")
    except EOFError:
        break
