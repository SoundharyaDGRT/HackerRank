ef split_and_join(line):
    split_word = line.split(" ")
    result = '-'.join(split_word)
    return result


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
