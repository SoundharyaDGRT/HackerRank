if __name__ == '__main__':
    N = int(input())
    List = []
    for number in range(N):
        userInput = input()
        args = userInput.split(" ")
        command = args[0]
        args = args[1:]
        args = [int(arg) for arg in args]
        
        if command == "insert":
            List.insert(args[0],args[1])
        elif command == "print":
            print(List)
        elif command == "remove":
            List.remove(args[0])
        elif command == "append":
            List.append(args[0])
        elif command == "sort":
            List.sort()
        elif command == "pop":
            List.pop()
        elif command == "reverse":
            List.reverse()
